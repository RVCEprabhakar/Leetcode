class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> count;

        // Count all relevant characters in the text
        for (char c : text) {
            count[c]++;
        }

        int res = 0;
        while (true) {
            // Try to form the word "balloon" by removing the required letters
            if (count['b'] > 0 && count['a'] > 0 && count['l'] > 1 &&
                count['o'] > 1 && count['n'] > 0) {
                
                // Remove letters of "balloon"
                count['b']--;
                count['a']--;
                count['l'] -= 2;
                count['o'] -= 2;
                count['n']--;
                
                res++; // One "balloon" formed
            } else {
                break; // Cannot form more
            }
        }
        return res;
    }
};
