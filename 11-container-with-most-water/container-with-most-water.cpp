class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1,maxi=0;
        while(i<j)
        {
            int left=height[i];
            int right=height[j];
            int temp=min(left,right);
            maxi=max(maxi,temp*(j-i));
            if(left<right)
            i++;
            else
            j--;
        }
        return maxi;
    }
};