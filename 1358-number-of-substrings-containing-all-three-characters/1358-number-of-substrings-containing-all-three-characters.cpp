class Solution {
public:
    int numberOfSubstrings(string s) {
        //here we are using the hash table
        int n=s.size();
        int count=0;
        int left=0;
        int right=0;
        unordered_map<char,int>mp;
        while(right<n){
            mp[s[right]]++;
            while(mp.size() == 3){
                count+=(n-right);
                if(mp[s[left]]>1){
                    mp[s[left]]--;
                    
                }
                else{
                    mp.erase(s[left]);
                }
                left++;
            }
            right++;
        }
        return count;

        
    }
};