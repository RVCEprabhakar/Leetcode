class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));

        for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {

            //Moving down from the cell above it (i-1, j).
            //Moving right from the cell to the left of it (i, j-1).
            // The number of ways to reach dp[i][j] is the sum of the ways from dp[i-1][j] and dp[i][j-1]
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m-1][n-1];
        
        
    }
};