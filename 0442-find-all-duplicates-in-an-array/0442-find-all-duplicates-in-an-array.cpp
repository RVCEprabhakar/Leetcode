class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};