class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=nums.size()-1;
        int count=0;int sum=0;
        while(i<j)
        {
            sum=nums[i]+nums[j];
            if(sum==k)
            {
                count++;
                i++;
                j--;
            }
            else if(sum<k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return count;
    }
};