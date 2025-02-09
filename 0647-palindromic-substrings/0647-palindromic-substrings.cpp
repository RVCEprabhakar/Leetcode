class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;

        for (int i = 0; i < n; i++) {  // Start index
            for (int j = i; j < n; j++) {  // End index
                if (isPalindrome(s, i, j)) {
                    count++;  // Count palindromic substring
                }
            }
        }
        return count;
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
