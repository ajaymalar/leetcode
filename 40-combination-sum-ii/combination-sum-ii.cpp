class Solution {
    void cal(vector<int>&nums,int i,int target,vector<vector<int>>&ans,vector<int>&s)
    {
        if(target==0)
        {
            ans.push_back(s);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[j-1])continue;
            if(nums[j]>target)
            {
                break;
            }
            s.push_back(nums[j]);
            cal(nums,j+1,target-nums[j],ans,s);
            s.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>s;
        cal(candidates,0,target,ans,s);
        return ans;
    }
};