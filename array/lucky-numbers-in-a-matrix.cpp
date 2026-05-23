class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;

        for(int i = 0; i < m; i++){
            int minVal = INT_MAX;
            int col = 0;

            
            for(int j = 0; j < n; j++){
                if(matrix[i][j] < minVal){
                    minVal = matrix[i][j];
                    col = j;
                }
            }

            
            bool isLucky = true;
            for(int k = 0; k < m; k++){
                if(matrix[k][col] > minVal){
                    isLucky = false;
                    break;
                }
            }

            if(isLucky){
                result.push_back(minVal);
            }
        }

        return result;
    }
};