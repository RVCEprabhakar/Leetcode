import java.util.*;

class Solution {

    public List<Integer> findDisappearedNumbers(int[] nums) {

        int n = nums.length;

        Set<Integer> set = new HashSet<>();

        // Add all elements to the HashSet
        for (int num : nums) {
            set.add(num);
        }

        // List to store missing numbers
        List<Integer> result = new ArrayList<>();

        // Check numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            if (!set.contains(i)) {
                result.add(i);
            }
        }

        return result;
    }
}