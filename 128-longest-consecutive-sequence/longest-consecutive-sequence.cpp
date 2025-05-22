class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int l=0;
        for(auto i:s)
        {
            if(s.find(i-1)==s.end())
            {
                int temp=i;
                int count=1;
                while(s.find(temp+1)!=s.end())
                {
                    count++;
                    temp=temp+1;
                }
                l=max(l,count);
            }
        }
        return l;
    }
};