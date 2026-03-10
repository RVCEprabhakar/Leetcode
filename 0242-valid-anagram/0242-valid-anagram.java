// class Solution {
//     public boolean isAnagram(String s, String t) {
//         if(s.length()==t.length()){
//             char[] s1=s.toCharArray();
//             char[] s2=t.toCharArray();
//              Arrays.sort(s1);
//              Arrays.sort(s2);
//              if(Arrays.equals(s1,s2)){
//                 return true;
//              }
//              else{
//                 return false;
//              }

//         }else{
//             return false;
//         }
        
//     }
// }

class Solution {
    public boolean isAnagram(String s, String t) {

        if(s.length()!=t.length())
            return false;

        int[] count = new int[26];

        for(char c : s.toCharArray()){
            count[c - 'a']++;
        }

        for(char c : t.toCharArray()){
            count[c - 'a']--;

            if(count[c - 'a'] < 0)
                return false;
        }

        return true;
    }
}