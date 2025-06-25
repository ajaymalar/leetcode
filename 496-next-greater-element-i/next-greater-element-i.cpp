class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       /* vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            int foundIndex = -1;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    foundIndex = j;
                    break;
                }
            }
            int nextGreater = -1;
            for (int k = foundIndex + 1; k < nums2.size(); k++) {
                if (nums2[k] > nums1[i]) {
                    nextGreater = nums2[k];
                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;*/
        stack<int>st;
        unordered_map<int,int>mpp;
        for(auto n:nums2)
        {
            while(!st.empty() && st.top()<n)
            {
                mpp[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }
        vector<int>ans;
        for(auto n:nums1)
        {
            ans.push_back((mpp.find(n)!=mpp.end())?mpp[n]:-1);
        }
        return ans;
    }
};
