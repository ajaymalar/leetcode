class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if(word1.empty())
        return word2;
        if(word2.empty())
        return word1;
        int n1=word1.length();
        int n2=word2.length();
        string ans="";
        int i=0,j=0,count=0;
        while(i<n1 && j<n2)
        {
            if(count%2==0)
            ans+=word1[i++];
            else
            ans+=word2[j++];
            count++;
        }
        while(i<n1)
        {
            ans+=word1[i++];
        }
        while(j<n2)
        {
            ans+=word2[j++];
        }
        return ans;
    }
};