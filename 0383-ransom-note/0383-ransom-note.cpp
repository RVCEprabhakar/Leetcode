class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);

        // Count frequency of each character in magazine
        for (char c : magazine) {
            freq[c - 'a']++;
        }

        // Check if ransomNote can be constructed
        for (char c : ransomNote) {
            if (freq[c - 'a'] == 0) {
                return false;  // Character not available or used up
            }
            freq[c - 'a']--;  // Use the character
        }

        return true;
    }
};
