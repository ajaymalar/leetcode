class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       /* int n=nums.size();
        int temp=k;
        double maxi=INT_MIN;
        for(int i=0;i<=n-k;i++)
        {
            int sum=0;
            temp=k;
            for(int j=i;j<n;j++)
            {
                if(temp>0)
                {
                    sum+=nums[j];
                    temp--;
                }
                if(temp==0)
                {
                    double avg=(double)sum/(double)k;
                    maxi=max(maxi,avg);
                    break;
                }
            }
        }
        return maxi;*/
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        int maxi=sum;
        for(int i=k;i<n;i++)
        {
            sum+=nums[i]-nums[i-k];
            maxi=max(sum,maxi);
        }
        return (double)maxi/k;
    }
};