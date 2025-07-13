class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        map<int,int>mpp;
        mpp[0]=0;
        int n=gain.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int temp=gain[i]+mpp[i];
            mpp[i+1]=temp;
            maxi=max(maxi,temp);
        }
    return maxi;
    }
};