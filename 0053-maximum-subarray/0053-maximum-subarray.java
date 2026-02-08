class Solution {
    public int maxSubArray(int[] nums) {
        int maxsum=nums[0];
        int cursum=0;
        for(int n:nums){
            cursum=Math.max(n,cursum+n);
            maxsum=Math.max(maxsum,cursum);
        }
        return maxsum;
        
    }
}