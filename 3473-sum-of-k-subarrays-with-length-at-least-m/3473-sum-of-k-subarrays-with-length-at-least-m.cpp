class Solution {
public:
    int maxSum(vector<int>& nums, int k, int m) {
        int n = nums.size();
        vector<int> prefix(n + 1, 0);

        partial_sum(nums.begin(),nums.end(),prefix.begin()+1);
        
        vector<vector<int>> dp(k + 1, vector<int>(n + 1, -1e9));
        
        for (int j = 0; j <= n; j++) {
            dp[0][j] = 0;
        }
        
        for (int i = 0; i < k; i++) {
            int best = -1e9;
            for (int j = 0; j <= n; j++) {
                if (j > 0)
                    dp[i + 1][j] = max(dp[i + 1][j], dp[i + 1][j - 1]);
                
                if (j - m >= 0)
                    best = max(best, dp[i][j - m] - prefix[j - m]);
                
                if (best != -1e9)
                    dp[i + 1][j] = max(dp[i + 1][j], prefix[j] + best);
            }
        }
        
        return dp[k][n];
    }
};