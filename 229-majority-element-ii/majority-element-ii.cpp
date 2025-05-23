class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        if(n==1)
        return {nums[0]};
        else
        {
            int count1=0,count2=0,el1=0,el2=1;
            for(int i=0;i<n;i++)
            {
                if(count1==0 && el2!=nums[i])
                {
                    count1++;
                    el1=nums[i];
                }
                else if(count2==0 && el1!=nums[i])
                {
                    count2++;
                    el2=nums[i];
                }
                else if(el1==nums[i])
                count1++;
                else if(el2==nums[i])
                count2++;
                else
                {
                    count1--;
                    count2--;
                }
            }
            int mini=n/3+1;
            count1=count2=0;
            for(int i=0;i<n;i++)
            {
                if(el1==nums[i])
                count1++;
                else if(el2==nums[i])
                count2++;
            }
            if(count1>=mini)
            ans.push_back(el1);
            if(count2>=mini)
            ans.push_back(el2);
        }
    return ans;
    }
};