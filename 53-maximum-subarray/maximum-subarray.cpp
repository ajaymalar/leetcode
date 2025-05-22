class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];
        int sum=0,s=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum<0)
            {

                sum=0;
            }
            s=max(s,sum);
        }
        if(s==0)
        {
            int maxi=nums[0];
            for(int i=0;i<n;i++)
            {
                maxi=max(maxi,nums[i]);
            }
            return maxi;
        }
        return s;
    }
};