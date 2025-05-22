class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int k=0,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans[2*k]=nums[i];
                k++;
            }
            else
            {
                ans[2*j+1]=nums[i];
                j++;
            }
        }
        return ans;
    }
};