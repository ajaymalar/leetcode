class Solution {
    int mini(int i,int j,vector<vector<int>>&dp,vector<vector<int>>&grid)
    {
        if(i==0 && j==0)
        return grid[i][j];
        if(i<0 || j<0)
        return INT_MAX;
        if(dp[i][j]!=-1)
        return dp[i][j];
        return dp[i][j]=grid[i][j]+min(mini(i-1,j,dp,grid),mini(i,j-1,dp,grid));
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>>dp(r,vector<int>(c,-1));
        return mini(r-1,c-1,dp,grid);
    }
};