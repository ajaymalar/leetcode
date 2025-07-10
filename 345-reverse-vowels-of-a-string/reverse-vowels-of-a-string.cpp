class Solution {
public:
    string reverseVowels(string s) {
        vector<char>r;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='O' || s[i]=='o' || s[i]=='u' || s[i]=='U')
            {
                r.push_back(s[i]);
            }
        }
        reverse(r.begin(),r.end());
        int k=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='O' || s[i]=='o' || s[i]=='u' || s[i]=='U')
            s[i]=r[k++];
        }
        return s;
    }
};