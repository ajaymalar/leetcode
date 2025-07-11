class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";char temp;
        int c=0;
        for(auto ch:chars)
        {
            if(c==0)
            {
                temp=ch;
                c++;
            }
            else
            {
                if(temp==ch)
                {
                    c++;   
                }
                else if(temp!=ch && c!=1)
                {
                    ans+=temp;
                    ans+=to_string(c);
                    temp=ch;
                    c=1;
                }
                else
                {
                    ans+=temp;
                    temp=ch;
                    c=1;
                }
            }
        }
        ans+=temp;
        if(c!=1)
        ans+=to_string(c);
        chars.clear();
        for(auto c:ans)
        {
            chars.push_back(c);
        }
        return ans.length();
    }
};