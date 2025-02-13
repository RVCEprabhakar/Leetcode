class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;

        
    }
};