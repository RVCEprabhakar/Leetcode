class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>>mini;
        for(int i=0;i<n;i++){
            mini.push(nums[i]);
            if(mini.size()>k){
                mini.pop();
            }
        }
        return mini.top();
        
    }
};