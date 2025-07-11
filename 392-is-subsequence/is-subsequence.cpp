class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="")
        return true;
        else if(t=="" && s!="")
        return false;
        int n2=t.length();
        int n1=s.length(),i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(s[i]==t[j])
            {
                i++;
                if(i==n1)
                return true;
            }
            j++;
        }
        return false;
    }
};