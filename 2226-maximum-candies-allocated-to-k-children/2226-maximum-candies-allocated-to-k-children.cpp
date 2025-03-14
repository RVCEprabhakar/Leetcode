class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1, high = *max_element(candies.begin(), candies.end());
        int res = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long count = 0;
            
            for (int c : candies) {
                count += c / mid;  // Count how many children can get mid candies
            }
            
            if (count >= k) {  
                res = mid;  // Store max valid answer
                low = mid + 1;  // Try larger mid
            } else {
                high = mid - 1;  // Try smaller mid
            }
        }
        
        return res;
    }
};
