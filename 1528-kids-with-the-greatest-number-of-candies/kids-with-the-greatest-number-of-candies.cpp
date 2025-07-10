class Solution {
    bool isGreatest(int k,vector<int>&candies)
    {
        for(int i=0;i<candies.size();i++)
        {
            if(k<candies[i])
            {
                return false;
            }
        }
        return true;
    }
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>res(n,false);
        for(int i=0;i<candies.size();i++)
        {
            int temp=0;
            temp=candies[i]+extraCandies;
            if(isGreatest(temp,candies))
            res[i]=true;
        }
        return res;
    }
};