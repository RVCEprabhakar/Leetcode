class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> map;
        for(int num:nums){
            map[num]++;
        }
        int i=1;
        while(i){
            if(map.find(i)!=map.end()) i++;
            else break;
        }
        return i;
    }
};