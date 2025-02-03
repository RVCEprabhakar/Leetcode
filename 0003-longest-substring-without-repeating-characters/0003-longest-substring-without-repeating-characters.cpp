
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0,r=0;
        int maxlen=0; 
        unordered_map<char,int>mp;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};