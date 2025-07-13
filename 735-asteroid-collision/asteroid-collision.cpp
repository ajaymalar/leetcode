class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        int n=asteroids.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            int cur=asteroids[i];
            bool destroyed=false;
            while(!st.empty()&& cur<0 && st.top()>0)
            {
                int temp=st.top();
                if(temp<-cur)
                {
                    st.pop();
                    continue;
                }
                else if(temp==-cur)
                {
                    destroyed=true;
                    st.pop();
                    break;
                }
                else
                {
                    destroyed=true;
                    break;
                }
            }
        if(!destroyed)
        {
            st.push(cur);
        }
        }
        while(!st.empty())
        {
            int temp=st.top();
            ans.insert(ans.begin(),temp);
            st.pop();
        }
        return ans;
    }
};