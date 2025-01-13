class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int maxi=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(maxi<arr[i]){
                maxi=arr[i];
            }
            if(maxi==i){
                ans++;
            }
        }
        return ans;



        
    }
};