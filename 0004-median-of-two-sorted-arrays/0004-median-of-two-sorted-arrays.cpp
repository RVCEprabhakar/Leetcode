class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Merging the two sorted arrays
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();
        
        // Merge the two arrays
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        
        // If there are remaining elements in nums1
        while (i < n) {
            ans.push_back(nums1[i]);
            i++;
        }
        
        // If there are remaining elements in nums2
        while (j < m) {
            ans.push_back(nums2[j]);
            j++;
        }
        // Calculate the median
        int total = n + m; // Total number of elements in the merged array
        if (total % 2 == 1) {
            // Odd number of elements
            return ans[total / 2];
        } else {
            // Even number of elements
            return (ans[(total / 2) - 1] + ans[total / 2]) / 2.0;
        }
    }
};
