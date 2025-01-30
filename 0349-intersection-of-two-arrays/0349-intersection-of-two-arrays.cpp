class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {


         vector<int>ans;
         unordered_map<int,int>umap;

         for(auto i:nums1){
            umap[i]++;
         }
         for(auto i:nums2){

            if(umap.find(i)!=umap.end()){
                ans.push_back(i);
                umap .erase(i);
            }
         }
         return ans;


    }
};