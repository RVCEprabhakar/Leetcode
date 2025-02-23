class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Min-heap to keep track of top k frequent elements
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        unordered_map<int,int> mpp;  // To count the frequency of each element
        vector<int> result;

        // Count the frequency of each element in nums
        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        // Iterate over the frequency map
        for(auto i = mpp.begin(); i != mpp.end(); i++) {
            minh.push({i->second, i->first});  // Push frequency and element pair into min-heap
            if(minh.size() > k) {
                minh.pop();  // Keep only the top k elements in the min-heap
            }
        }

        // Extract elements from the min-heap
        while(!minh.empty()) {
            result.push_back(minh.top().second);  // Get the element (second in the pair)
            minh.pop();
        }

        return result;
    }
};