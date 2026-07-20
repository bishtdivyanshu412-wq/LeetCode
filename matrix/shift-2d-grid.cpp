class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
     int m = grid.size();
     int n = grid[0].size();

     if(k % (n*m) == 0) return grid;   
    }
};