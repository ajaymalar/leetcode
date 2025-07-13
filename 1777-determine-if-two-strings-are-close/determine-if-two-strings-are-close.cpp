class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
        return false;
        map<char,int>mpp1,mpp2;
        for(auto s:word1)
        {
            mpp1[s]++;
        }
        for(auto s:word2)
        {
            mpp2[s]++;
        }
        set<char>s1,s2;
        for(auto [n,_]:mpp1)
        s1.insert(n);
        for(auto [n,_]:mpp2)
        s2.insert(n);
        if(s1!=s2)
        return false;
       multiset<int>s3,s4;
       for(auto [_,c]:mpp1)
       s3.insert(c);
       for(auto [_,c]:mpp2)
       s4.insert(c);
       return s3==s4;
    }
};