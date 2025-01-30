class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;  // Map to store frequency of each number
        
        // Step 1: Count the occurrences of each number
        for (int num : arr) {
            mpp[num]++;
        }
        
        // Step 2: Check for duplicate frequencies
        unordered_set<int> freqSet;
        for (auto it : mpp) {
            // If the frequency is already in the set, return false
            if (freqSet.count(it.second)) {
                return false;
            }
            freqSet.insert(it.second);
        }
        
        return true;  // All frequencies are unique
    }
};
