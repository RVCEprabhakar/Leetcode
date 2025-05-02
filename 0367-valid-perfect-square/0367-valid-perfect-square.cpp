class Solution {
public:
    bool isPerfectSquare(int num) {
        long long q=num/4;
        long long value=1;
        while(value*value <=num){
            if(value*value == num){
                return true;
               
            }else{
                 value++;
            }
        }
        return false;




        
    }
};