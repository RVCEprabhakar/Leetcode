class Solution {
    public int maxProfit(int[] prices) {
        
        int profit=0;
        int mini=Integer.MAX_VALUE;

        for(int price:prices){
            if(price<mini){
                mini=price;
            }
            else{
                profit=Math.max(profit,price-mini);
            }


        }
        return profit;
    }
}