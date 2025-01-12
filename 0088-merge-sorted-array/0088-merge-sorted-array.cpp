class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Copy elements from nums2 to nums1 after the m-th position
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        // Sort the combined array
        sort(nums1.begin(), nums1.end());
    }
};
