class Solution {
    int merge(vector<int>&nums,int low,int mid,int high)
    {
        int c=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++)
        {
            while(j<=high && (long long)nums[i]>2LL *nums[j])
            {
                j++;
            }
            c+=j-(mid+1);
        }
        vector<int>temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high)
        {
            if(nums[left]<=nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }
            else
            {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++)
        {
            nums[i]=temp[i-low];
        }
        return c;
    }
    int mergesort(vector<int>&nums,int low,int high)
    {
        int counter=0;
        if(low<high)
        {
            int mid=(low+high)/2;
            counter+=mergesort(nums,low,mid);
            counter+=mergesort(nums,mid+1,high);
            counter+=merge(nums,low,mid,high);
        }
        return counter;
    }
public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergesort(nums,0,n-1);
    }
};