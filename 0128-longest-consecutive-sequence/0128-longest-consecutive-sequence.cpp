class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n == 0){
            return 0;
        }
        int longest=1,cnt=1,ls=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1 == ls){
                cnt=cnt+1;
                ls=nums[i];
            }
            else if( nums[i] != ls){
                cnt=1;
                ls=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
        
    }
};