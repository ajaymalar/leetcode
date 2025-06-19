class Solution {
    void neighbor(int nrow,int ncol,vector<vector<int>>&vis,vector<vector<char>>&grid,int n,int m)
    {
        vis[nrow][ncol]=1;
        queue<pair<int,int>>q;
        q.push({nrow,ncol});
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();

            for(int i=-1;i<=1;i++)
            {
                for(int j=-1;j<=1;j++)
                {
                    if((i==0 && j!=0)|| (i!=0 && j==0))
                    {
                        int nr=r+i;
                        int nc=c+j;
                        if(nr>=0 && nr<n && nc>=0 && nc<m 
                        &&!vis[nr][nc] && grid[nr][nc]=='1')
                        {
                            vis[nr][nc]=1;
                            q.push({nr,nc});
                        }
                    }
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    neighbor(i,j,vis,grid,n,m);
                    count++;
                }
            }
        }
        return count;
    }
};