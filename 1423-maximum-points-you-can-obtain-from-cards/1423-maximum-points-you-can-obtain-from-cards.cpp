class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size(); 
        // Step 1: Calculate the sum of the last k cards (taking them from the right end of the array)
        int total = 0;
        for (int i = n - k; i < n; ++i) {
            total += cardPoints[i];  // Summing the last k cards
        }
        int maxScore = total;  // This is our initial max score




        // Step 2: Sliding window approach
        for (int i = 0; i < k; ++i) {
            // Slide the window by adding one card from the front (beginning) and removing one from the end
            total += cardPoints[i] - cardPoints[n - k + i];
            // Update max score after adjusting the window
            maxScore = max(maxScore, total);
        }

        return maxScore;  // Return the maximum score found
    }
};
