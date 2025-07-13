class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mpp;
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        for(auto s:s1)
        {
            mpp[s]++;
        }
        for(auto s:s2)
        {
            mpp[s]++;
        }
        vector<vector<int>>ans;
        vector<int>temp;
        for(auto s:s1)
        {
            if(mpp.find(s)!=mpp.end())
            {
                if(mpp[s]<=1)
                temp.push_back(s);
            }
        }
            ans.push_back(temp);
        
        temp.clear();
        for(auto s:s2)
        {
            if(mpp.find(s)!=mpp.end())
            {
                if(mpp[s]<=1)
                temp.push_back(s);
            }
        }
            ans.push_back(temp);
        return ans;
    }
};