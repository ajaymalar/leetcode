class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=0;i<n;i++)
        {
            while(j<m && nums1[j]<=nums2[i])
            {
                j++;
            }
            {
                nums1.insert(nums1.begin()+j,nums2[i]);
                j++;
                m++;
            }
        }
        nums1.resize(m);
    }
};