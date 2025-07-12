class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi=0,count=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count++;
            }
        }
        maxi=count;
        for(int i=k;i<s.length();i++)
        {
            if(s[i-k]=='a' || s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
                count--;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                count++;
            maxi=max(maxi,count);
        }
        if(maxi>k)
        return k;
        return maxi;
    }
};