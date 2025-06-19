class Solution {
    bool bfs(int start,vector<vector<int>>adj,vector<int>color)
    {
        color[start]=0;
        queue<int>q;
        q.push(start);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto i:adj[node])
            {
                if(color[i]==-1)
                {
                    color[i]=!color[node];
                    q.push(i);
                }
                else if(color[i]==color[node])
                return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(!bfs(i,graph,color))
                return false;
            }
        }
        return true;
    }
};