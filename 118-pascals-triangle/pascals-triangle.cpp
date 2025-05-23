class Solution {
    private:
    vector<int> cal(int row)
    {
        vector<int>ans;
        ans.push_back(1);
        int t=1;
        for(int i=1;i<row;i++)
        {
            t=t*(row-i);
            t=t/i;
            ans.push_back(t);
        }
        return ans;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(cal(i));
        }
        return ans;
    }
};