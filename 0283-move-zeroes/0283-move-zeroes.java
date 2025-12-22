class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        int right = 0;

        for (int left = 0; left < n; left++) {
            if (nums[left] != 0) {
                // swap nums[left] and nums[right]
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;

                right++;
            }
        }
    }
}
