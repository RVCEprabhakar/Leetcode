
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
          int lo = 0;
        int hi =n;
      int ans=0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (isBadVersion(mid)) {
                ans= mid;
                hi=mid-1;
            } else {
                lo = mid + 1;
            }
        }
        return ans; 
    }
};