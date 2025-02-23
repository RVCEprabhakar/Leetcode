class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int left=0;
        int right=n-1;
        while(left<right){
            if(!isalnum(s[left])){
                left++;
                continue;
            }
            else if(!isalnum(s[right])){
                right--;
                continue;
            }
            else if(tolower(s[left])!=tolower(s[right]))
            return false;
            else{
                 left++;
                right--;

            }
 

        }
        return true;

        
    }
};