class Solution {
public:
    int maxArea(vector<int>& height) {
        //here we are applying the two pointer approches
        int n=height.size();
        int maxarea=0;
        int left=0;
        int right=n-1;
        while(left<right){
            maxarea=max(maxarea, (right-left) * min(height[left],height[right]));
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
        }
        return maxarea;
    }
};