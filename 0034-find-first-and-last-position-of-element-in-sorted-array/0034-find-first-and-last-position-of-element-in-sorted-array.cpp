class Solution {
public:
int firstoccurance(vector<int>& nums, int target){
    int low=0;
    int high=nums.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid] == target){
            ans=mid;
            high=mid-1;
        }
        if(nums[mid] < target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}




int lastoccurance(vector<int>& nums, int target){


    int low=0;
    int high=nums.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid] == target){
            ans=mid;
            low=mid+1;
        }
        if(nums[mid] > target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> result(2);
        result[0] = firstoccurance(nums, target);
        result[1] = lastoccurance(nums, target);
        return result;
    }
};