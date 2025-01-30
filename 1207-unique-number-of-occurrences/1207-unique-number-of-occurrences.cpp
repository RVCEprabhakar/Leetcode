class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>umap;
        unordered_set<int>s;
        for(auto x:arr){
            umap[x]++;
        }
        for(auto x:umap){
            if(!s.insert(x.second).second) return false;
        }
        

return true;


        
    }
};