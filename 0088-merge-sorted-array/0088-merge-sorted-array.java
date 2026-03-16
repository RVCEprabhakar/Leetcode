class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // for (int j = 0, i = m; j < n; j++) {
        //     nums1[i] = nums2[j];
        //     i++;
        // }
        // Arrays.sort(nums1);
  

//   ArrayList<Integer> a1=new ArrayList<>();
//   for(int n1:nums1){
//     a1.add(n1);
//   }
//    for(int n1:nums2){
//     a1.add(n1);
//   }

//   Collections.sort(a1);

  for(int i=0;i<n;i++){
   nums1[m+i]=nums2[i];
  }
  Arrays.sort(nums1);
    }
}