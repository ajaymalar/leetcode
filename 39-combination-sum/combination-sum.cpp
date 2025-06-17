class Solution {
    void cal(vector<int>&nums,int i,int target,vector<vector<int>>&ans,vector<int>&s)
    {
        if(i==nums.size())
        {
            if(target==0)
            ans.push_back(s);
            return;
        }
        if(nums[i]<=target)
        {
            s.push_back(nums[i]);
            cal(nums,i,target-nums[i],ans,s);
            s.pop_back();
        }
        cal(nums,i+1,target,ans,s);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>s;
        cal(candidates,0,target,ans,s);
        return ans;
    }
};