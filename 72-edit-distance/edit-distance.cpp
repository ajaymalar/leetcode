class Solution {
    int findmin(string &word1,string &word2,int i,int j,vector<vector<int>>&dp)
    {
        if(i<0)
        return j+1;
        if(j<0)
        return i+1;
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(word1[i]==word2[j])
        return dp[i][j]=findmin(word1,word2,i-1,j-1,dp);
        else
        {
            return dp[i][j]=1+min(findmin(word1,word2,i-1,j-1,dp),min(findmin(word1,word2,i-1,j,dp),findmin(word1,word2,i,j-1,dp)));
        }
    }
public:
    int minDistance(string word1, string word2) {
        int l1=word1.size(),l2=word2.size();
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,-1));
        return findmin(word1,word2,l1-1,l2-1,dp);
    }
};