class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix[0].size()-1;
        while(j>=0 && i<=matrix.size()-1){
            if(target == matrix[i][j]) return 1;
            else if(target>matrix[i][j]) i++;
            else j--;
        }
        return 0;
        
    }
};