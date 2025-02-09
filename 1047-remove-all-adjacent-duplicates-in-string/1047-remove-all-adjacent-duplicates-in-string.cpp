class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        
        for (char ch : s) {
            if (!result.empty() && result.back() == ch) {
                result.pop_back();  // Remove the duplicate
            } else {
                result.push_back(ch);  // Add to result if no adjacent duplicate
            }
        }
        
        return result;
    }
};
