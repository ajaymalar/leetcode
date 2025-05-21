class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int v=0;
        for(int i=0;i<nums.size();i++)
        {
            v=nums[i];
            int rem=target-v;
            if(mpp.find(rem)!=mpp.end())
            {
                return {i,mpp[rem]};
            }
            mpp[v]=i;
        }
        return {-1,-1};
    }
};