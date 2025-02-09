class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;  // If only one character, return it directly.

        string longest = "";

        for (int i = 0; i < n; i++) {  // Start index of substring
            for (int j = i; j < n; j++) {  // End index of substring
                if (isPalindrome(s, i, j)) {  // Check if substring is palindrome
                    if (j - i + 1 > longest.size()) {  // Update longest palindrome
                        longest = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return longest;
    }

private:
    bool isPalindrome(string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
