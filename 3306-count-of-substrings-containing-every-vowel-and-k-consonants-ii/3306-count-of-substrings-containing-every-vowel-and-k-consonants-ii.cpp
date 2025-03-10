class Solution {
public:
    long long atMostK(string word, int k) {
        int n = word.size();
        int l = 0, consonant = 0;
        long long cnt = 0;
        
        map<char, int> vowels;
        set<char> vowelsSet = {'a', 'e', 'i', 'o', 'u'};
        
        for (int r = 0; r < n; r++) {
            if (vowelsSet.find(word[r]) != vowelsSet.end()) {
                vowels[word[r]]++;
            } else {
                consonant++;
            }
            
            while (vowels.size() == 5 && consonant > k) {
                if (vowelsSet.find(word[l]) != vowelsSet.end()) {
                    vowels[word[l]]--;
                    if (vowels[word[l]] == 0) {
                        vowels.erase(word[l]);
                    }
                } else {
                    consonant--;
                }
                l++;
            }
            
            cnt += (r - l + 1);  // Correcting the counting formula
        }
        return cnt;
    }

    long long countOfSubstrings(string word, int k) {
        return atMostK(word, k) - atMostK(word, k - 1);
    }
};