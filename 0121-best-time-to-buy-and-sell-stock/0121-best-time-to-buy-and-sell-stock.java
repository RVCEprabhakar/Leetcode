class Solution {
    public int maxProfit(int[] prices) {
        
        int n = prices.length;
        int profit = 0;
        int mini = Integer.MAX_VALUE;

        for (int i = 0; i < n; i++) {
            // update minimum price
            if (prices[i] < mini) {
                mini = prices[i];
            }
            // calculate max profit
            else if (prices[i] - mini > profit) {
                profit = prices[i] - mini;
            }
        }
        return profit;
    }
}
