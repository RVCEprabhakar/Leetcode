class Solution {
public:
    int strStr(string haystack, string needle) {

        int len=needle.size();
        int len_hay=haystack.size();

           //if (len > len_hay) return -1;
        for(int i=0;i<=len_hay-len;i++){
            if(haystack.substr(i,len) == needle)
            return i;
        }
        return  -1;
        
    }
};