class Solution {
    public int lengthOfLongestSubstring(String s) {
        int[] freq = new int[256];

        int left=0;
        int max=0;
        for(int right=0;right<s.length();right++){
            char c=s.charAt(right);
            freq[c]++;
            
    while (freq[c] > 1) {
    freq[s.charAt(left)]--;
    left++;

        }
        max = Math.max(max, right - left + 1);
    
}

return max;




        
    }
}