class Solution { //t.o(n**2) + o(1), s-o(n)
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int repeating=-1, missing=-1; unordered_map<int, int>m;
        int sum=0; //for sumemtion
        for (auto row : grid) {
            for (auto i : row) {
                m[i]++;
                sum++;
            }
        }

        for(int i=1;i<=sum;i++){
            if(m[i] == 2) repeating = i;
            else if(m[i] == 0) missing = i;
        }
        return {repeating, missing};
    }
};