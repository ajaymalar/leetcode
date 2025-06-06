class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int maxleft=0,maxright=0,total=0;
        while(left<right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>=maxleft)
                {
                    maxleft=height[left];
                }
                else
                {
                    total+=maxleft-height[left];
                }
                left++;
            }
            else
            {
                if(height[right]>=maxright)
                {
                    maxright=height[right];
                }
                else
                {
                    total+=maxright-height[right];
                }
                right--;
            }
        }
        return total;
    }
};