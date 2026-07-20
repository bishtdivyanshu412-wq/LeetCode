class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
     int m = grid.size();
     int n = grid[0].size();

     if(k % (n*m) == 0) return grid; 


     if(k % n == 0){
        int i =0;
        int j = m-1;

        while(i<j){
            for(int k =0;k<n;k++){
                swap(grid[i][k], grid[j][k]);
            }
            i++;
        }
        return grid;
     }
     else{
        for(int i =1 ; i<=k;i++){
            int j = 0;
            int k = n-1;
            while(j<k){
                for(int z = 0;z<m;z++){
                    swap(grid[z][j] , grid[z][k]);
                }
                j++;
            }

            int x = 0;
            int y = m-1;
            while(x<y){
                swap(grid[x][0] , grid[y][0]);
                x++;
            }
        }
     }
     return grid;  
    }
};