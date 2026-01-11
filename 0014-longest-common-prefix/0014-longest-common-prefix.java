class Solution {
    public String longestCommonPrefix(String[] strs) {

 if (strs == null || strs.length == 0) {
            return "";
        }

        // Loop through characters of first string
        for (int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0].charAt(i);

            // Compare with all other strings
            for (int j = 1; j < strs.length; j++) {

                // If index exceeds length OR characters mismatch
                if (i >= strs[j].length() || strs[j].charAt(i) != ch) {
                    return strs[0].substring(0, i);
                }
            }
        }

        // Entire first string is common prefix
        return strs[0];


        
    }
}