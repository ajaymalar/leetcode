class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mpp;
        int left=0,right=0;
        int n=s.size();
        int len=0;
        while(right<n)
        {
            if(mpp.find(s[right])!=mpp.end())
            {
                left=max(left,mpp[s[right]]+1);
            }
            mpp[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};