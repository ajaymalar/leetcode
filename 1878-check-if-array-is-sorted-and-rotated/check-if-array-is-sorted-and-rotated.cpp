class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%n])
            count++;
        }
        if(count<=1)
        return true;
        return false;

        /*
        int n=nums.size();
        int p=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]>nums[i+1])
            {
                p=i;
                break;
            }
        }
        if(p==-1)
        return true;
        reverse(nums.begin(),nums.begin()+p+1);
        reverse(nums.begin()+p+1,nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            return false;
        }
        return true;*/
    }
};