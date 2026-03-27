class Solution {
    public int maxProfit(int[] prices) {
        
        int profit=0;
        int mini=Integer.MAX_VALUE;

        for(int p:prices){
            if(p<mini){
                mini=p;
            }
            else{
                profit=Math.max(profit,p-mini);
            }


        }
        return profit;
    }
}