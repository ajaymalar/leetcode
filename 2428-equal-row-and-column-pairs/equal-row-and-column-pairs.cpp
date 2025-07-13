class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count,c=0;
        vector<int>temp;
        int n=grid.size();
        for(int i=0;i<grid.size();i++)
        {
            temp.clear();
            for(int j=0;j<grid[0].size();j++)
            {
               temp.push_back(grid[i][j]);
            }
            for(int k=0;k<n;k++)
            {
                count=0;
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j]==grid[j][k])
                count++;
            }
            if(count==grid.size())
            c++;
            }
        }
        return c;
    }
};