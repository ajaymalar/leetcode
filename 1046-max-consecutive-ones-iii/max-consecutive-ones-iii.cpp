class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int temp=k;
        int n=nums.size();
        int count=0,i=0,maxi=INT_MIN;
        for(int j=0;j<n;j++)
        {
            if(nums[j]==0)
            temp--;
            while(temp<0)
            {
                if(nums[i]==0)
                temp++;
                i++;
            }
            count=j-i+1;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};