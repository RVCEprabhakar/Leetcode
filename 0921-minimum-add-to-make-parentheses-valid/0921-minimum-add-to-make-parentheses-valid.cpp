class Solution {
public:
    int minAddToMakeValid(string s) {
        

        int open =0;
        int close=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                open++;
            }
            if(s[i] == ')' and open>0){
                open--;
            }
            else if(s[i] == ')'){
                close++;
            }
        }
        return open+close;
    }
};