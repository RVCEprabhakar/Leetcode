class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>freq;
        for(auto it:mp){
            freq.push_back({it.second,it.first});
        }
        sort(freq.rbegin(),freq.rend());
        string result="";
        for(auto it:freq){
            result += string(it.first, it.second);
        }
        return result;
    }
};