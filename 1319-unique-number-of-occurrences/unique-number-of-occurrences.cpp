class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mpp;
        for(auto a:arr)
        {
            mpp[a]++;
        }
        int m=mpp.size();
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(mpp[arr[i]]);
        }
        return s.size()==m;
    }
};