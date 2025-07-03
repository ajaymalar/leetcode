class Solution {
    int dpp(vector<int>&nums,int n,int ind,int prev,vector<vector<int>>&dp)
    {
        if(ind==n)
        return 0;
        if(dp[ind][prev+1]!=-1)
        {
            return dp[ind][prev+1];
        }
        int nottake=0+dpp(nums,n,ind+1,prev,dp);
        int take=0;
        if(prev==-1|| nums[ind]>nums[prev])
        {
            take=1+dpp(nums,n,ind+1,ind,dp);
        }
        return dp[ind][prev+1]=max(take,nottake);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return dpp(nums,n,0,-1,dp);
    }
};