class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<int,pair<int,int>>>maxi;
        int n=points.size();
        for(int i=0;i<n;i++){
            int dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            maxi.push({dist,{points[i][0],points[i][1]}});
            if(maxi.size()>k){
                maxi.pop();
            }
        }
       vector<vector<int>> result;
        while(!maxi.empty()){
           auto node = maxi.top();
            maxi.pop();
            result.push_back({node.second.first, node.second.second});
        }
        return result;
        
    }
};