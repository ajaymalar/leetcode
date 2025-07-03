/*class Solution {
    unordered_map<string,string>mpp;
public:
    string longestPalindrome(string s) {
       if(mpp.find(s)!=mpp.end())
       return mpp[s];
       if(s==string(s.rbegin(),s.rend()))
       {
        return mpp[s]=s;
       }
       string l=longestPalindrome(s.substr(1));
       string r=longestPalindrome(s.substr(0,s.size()-1));
       return mpp[s]=(l.length()>r.length()?l:r);
    }
};*/
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) return s;

        int start = 0, maxLen = 1;

        for (int i = 0; i < n; i++) {
            expandFromCenter(s, i, i, start, maxLen);     
            expandFromCenter(s, i, i + 1, start, maxLen);
        }

        return s.substr(start, maxLen);
    }

private:
    void expandFromCenter(string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }
};
