class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),i=-1;
        for( i=0;i<n;i++)
        {
            if(nums[i]==0)
            break;
        }
        if(i!=-1){
        for(int j=i+1;j<n;j++)
        {
            if(nums[j]!=0)
            {swap(nums[i],nums[j]);
            i++;
            }
        }}
    }
};