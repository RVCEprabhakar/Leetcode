class Solution {
public:
    bool isPalindrome(string s) {
        // here we are applying hte two pointer appraches here
        int left=0;
        int right=s.size()-1;
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