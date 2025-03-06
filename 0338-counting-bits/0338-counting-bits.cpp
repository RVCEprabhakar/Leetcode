class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++) {
            int count = 0, num = i;
            while (num > 0) { // Count set bits
                count += (num & 1);  // Check last bit
                num >>= 1;  // Shift right
            }
            ans.push_back(count);  // Store count of 1s in `ans[i]`
        }
        return ans;
    }
};
