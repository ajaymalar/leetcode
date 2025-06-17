class Solution 
{
    void cal(vector<int>&nums,int i,vector<int>&s,vector<vector<int>>&res)
    {
        res.push_back(s);

        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[j-1])
            continue;
            s.push_back(nums[j]);
            cal(nums,j+1,s,res);
            s.pop_back();
        }
        /*if(i==nums.size())
        {
            sort(s.begin(),s.end());
            res.insert(s);
            return;
        }
        s.push_back(nums[i]);
        cal(nums,i+1,s,res);
        s.pop_back();
        cal(nums,i+1,s,res);
        */
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       /* vector<vector<int>>ans;
        set<vector<int>>res;
        vector<int>s;
        if(nums.size()==0)
        return ans;
        cal(nums,0,s,res);
        for(auto it=res.begin();it!=res.end();it++)
        {
            ans.push_back(*it);
        }
        return ans;*/
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>s;
        cal(nums,0,s,ans);
        return ans;
    }
};