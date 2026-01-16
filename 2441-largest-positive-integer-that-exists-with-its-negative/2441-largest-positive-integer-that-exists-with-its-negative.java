class Solution {
    public int findMaxK(int[] nums) {
        HashSet<Integer>set=new HashSet<>();
        int ans=-1;
        for(int n:nums){
            set.add(n);
           
        }
        for(int n:nums){
            if(n>0 && set.contains(-n)){
                ans=Math.max(ans,n);
            }
        }
        return ans;

        
    }
}