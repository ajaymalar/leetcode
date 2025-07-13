/*class Solution {
public:
    string removeStars(string s) {
        string ans="";
        long long n=s.length();
        stack<char>st;
        for(long long i=0;i<n;i++)
        {
            if(s[i]=='*')
            st.pop();
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            char temp=st.top();
            st.pop();
            ans=temp+ans;
        }
        return ans;
    }
};*/
class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        for (char ch : s) {
            if (ch == '*') {
                if (!ans.empty())
                    ans.pop_back();
            } else {
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
