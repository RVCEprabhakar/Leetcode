class Solution {
public:
    int nextGreaterElement(int n) {
        string num = to_string(n);
        if(next_permutation(num.begin(),num.end())) 
            return stol(num)>INT_MAX ? -1 : stol(num);
        return -1;
    }
};