class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    
    vector<int> dp(n + 1, 0);
    //here no staircase in first basecase only 0 cost
    dp[0]=0;
    //here one staircase in basecase 1 stair for min cost is also 0
    dp[1]=0;

    for (int i = 2; i <= n; i++) {
        dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
    }
    return dp[n];
}
};