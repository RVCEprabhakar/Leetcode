class Solution {
public:
    int missingNumber(vector<int>& nums) {

 int n = nums.size();
        unordered_map<int, int> numMap;

        // Count the occurrences of each number in the map
        for (int num : nums) {
            numMap[num]++;
        }

        // Find the missing number
        for (int i = 0; i <= n; i++) {
            if (numMap[i] == 0) {
                return i; // Missing number
            }
        }

        return -1; // This line won't be reached as there is always a missing number
    }
        
    
};