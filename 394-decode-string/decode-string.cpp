class Solution {
public:
    string decodeString(string s) {
        stack<int>stnum;
        stack<string>ststr;
        string curr="";
        int num=0;
        for(char ch:s)
        {
            if(isdigit(ch))
            num=num*10+(ch-'0');
            else if(ch=='[')
            {
                stnum.push(num);
                ststr.push(curr);
                curr="";
                num=0;
            }
            else if(ch==']')
            {
                int n=stnum.top();stnum.pop();
                string temp=ststr.top();ststr.pop();
                while(n--)
                {
                    temp+=curr;
                }
                curr=temp;
            }
            else
            curr+=ch;
        }
        return curr;
    }
};