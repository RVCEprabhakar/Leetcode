class Solution {
public:
    bool isPalindrome(string s,int l,int h){
        while(l<h){
            if(s[l]!=s[h])  return false;
            l++;h--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,h=s.size()-1;
        while(l<h){
            if(s[l]==s[h])  l++,h--;
            else{
                return isPalindrome(s,l+1,h) || isPalindrome(s,l,h-1);
            }
        }
        return true;
    }
};