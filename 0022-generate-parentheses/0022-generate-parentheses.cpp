class Solution {
public:

void generating(int n,int open,int close,vector<string>&ans,string &temp){

    if(open== n && close ==n){
        ans.push_back(temp);
        return;
    }
    if(open<n){
        temp.push_back('(');
        generating(n,open+1,close,ans,temp);
        temp.pop_back();

    }
    if (close < open) {
            temp.push_back(')');
            generating(n, open, close + 1, ans, temp);
            temp.pop_back(); // Backtrack to explore other possibilities
        }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;

        generating(n,0,0,ans,temp);
        return ans;

    }
};