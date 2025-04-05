class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int num=0;num<(1<<nums.size());num++){
            int val=0;
            for(int j=0;j<nums.size();j++){
                if(num & (1<<j))val^=nums[j];
            }
            ans+=val;
        }
        return ans;
    }
};