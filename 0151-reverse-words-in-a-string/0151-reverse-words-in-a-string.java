class Solution {
    public String reverseWords(String s) {

        // remove leading & trailing spaces
        s = s.trim();

        // split by one or more spaces
        String[] x = s.split("\\s+");

        StringBuilder sb = new StringBuilder();

        for (int i = x.length - 1; i >= 0; i--) {
            sb.append(x[i]);
            if (i != 0) {
                sb.append(" ");
            }
        }
        return sb.toString();
    }
}
