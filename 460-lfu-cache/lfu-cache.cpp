class LFUCache {
public:
    int capacity;
    unordered_map<int, int> keyToValue; 
    unordered_map<int, int> keyToFreq;      
    unordered_map<int, vector<int>> freqToKeys; 
    int minFreq = 0;

    LFUCache(int cap) {
        capacity = cap;
        minFreq = 0;
    }

    int get(int key) {
        if (keyToValue.find(key) == keyToValue.end()) {
            return -1;
        }
        increaseFrequency(key);
        return keyToValue[key];
    }

    void put(int key, int value) {
        if (capacity == 0) return;

        if (keyToValue.find(key) != keyToValue.end()) {
            keyToValue[key] = value;
            increaseFrequency(key);
            return;
        }

        if (keyToValue.size() == capacity) {
            removeLeastFrequent();
        }

        keyToValue[key] = value;
        keyToFreq[key] = 1;
        freqToKeys[1].push_back(key);
        minFreq = 1;
    }

private:
    void increaseFrequency(int key) {
        int freq = keyToFreq[key];
        keyToFreq[key] = freq + 1;
        auto& keys = freqToKeys[freq];
        keys.erase(remove(keys.begin(), keys.end(), key), keys.end());
        freqToKeys[freq + 1].push_back(key);
        if (keys.empty() && freq == minFreq) {
            minFreq++;
        }
    }

    void removeLeastFrequent() {
        vector<int>& keys = freqToKeys[minFreq];
        int evictKey = keys[0]; 
        keys.erase(keys.begin());
        keyToValue.erase(evictKey);
        keyToFreq.erase(evictKey);

        if (keys.empty()) {
            freqToKeys.erase(minFreq);
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */