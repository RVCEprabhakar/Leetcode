class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
        
    }
};