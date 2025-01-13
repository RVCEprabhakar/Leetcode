class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> M;
        
        // Step 1: Count frequency of each character in the string
        for (char c : s) {
            M[c]++;
        }

        int delet = 0; // Variable to track total deletions

        // Step 2: Iterate through the frequency map
        for (auto pair : M) {
            // If the frequency of a character is greater than 2
            if (pair.second > 2) {
                // If the frequency is even, we can remove excess characters
                if (pair.second % 2 == 0) {
                    delet += (pair.second - 2); // Keep 2 occurrences, remove the rest
                } 
                // If the frequency is odd, we need to keep 1 occurrence
                else {
                    delet += (pair.second - 1); // Keep 1 occurrence, remove the rest
                }
            }
        }

        // Step 3: Return the final length of the string after deletions
        return s.length() - delet;
    }
};