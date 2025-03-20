class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minVal = INT_MAX, moves = 0;

        // Find minimum value in the array
        for (int num : nums) {
            minVal = min(minVal, num);
        }

        // Calculate total moves required
        for (int num : nums) {
            moves += (num - minVal);
        }

        return moves;
    }
};
