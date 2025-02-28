class Solution {
public:
bool static compare(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),compare);
        int cnt=1;
        int p=0;
        for(int i=0;i<n;i++){
            if(intervals[i][0] >= intervals[p][1]){
                p=i;
                cnt++;
            }
        }

return n-cnt;
        
    }
};