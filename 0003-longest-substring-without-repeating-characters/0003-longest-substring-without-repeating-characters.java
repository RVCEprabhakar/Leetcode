class Solution {
    public int lengthOfLongestSubstring(String s) {

//         int[] freq = new int[256];

//         int left=0;
//         int max=0;
        
//         for(int right=0;right<s.length();right++){
//             char c=s.charAt(right);
//             freq[c]++;
                
//     while (freq[c] > 1) {
//     freq[s.charAt(left)]--;
//     left++;

//         }
//         max = Math.max(max, right - left + 1);
     
// }
// return max;

 HashSet<Character> set = new HashSet<>();

    int max=0;
    int left=0;

    for(int right=0;right<s.length();right++){
        char c=s.charAt(right);

        while(set.contains(c)){
            set.remove(s.charAt(left));
            left++;
        }
        set.add(c);
        max = Math.max(max, right - left + 1);

    }
    return max;


        
    }
}