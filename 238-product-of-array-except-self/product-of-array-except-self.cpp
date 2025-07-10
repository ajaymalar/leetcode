class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int temp=1,zerocount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            zerocount++;
            else
            p*=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(zerocount>1)
            {
                nums[i]=0;
            }
            else if(zerocount==1)
            {
                if(nums[i]==0)
                nums[i]=p;
                else
                nums[i]=0;
            }
            else
            nums[i]=p/nums[i];
        }
        return nums;
    }
};