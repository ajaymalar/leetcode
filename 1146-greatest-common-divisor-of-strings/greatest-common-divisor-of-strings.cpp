class Solution {
    bool isDivisor(string s,string pattern)
    {
        int len=pattern.length();
        if(s.length()%len!=0)
        return false;
        for(int i=0;i<s.length();i+=len)
        {
            if(s.substr(i,len)!=pattern)
            return false;
        }
        return true;
    }
public:
    string gcdOfStrings(string str1, string str2) {
        string ans="",res="";
        ans+=str1[0];
        int i=1;
        int n1=str1.length();
        while(i<=n1)
        {
            
            if(isDivisor(str1,ans) && isDivisor(str2,ans))
            {
               res=ans;
            }
            if(i<n1)
            ans+=str1[i++];
            else 
            break;
        }
        return res;
    }
};