class Solution {
public:
    
    vector<vector<int>> path;
    int minPathSum(vector<vector<int>>& grid) {
        int l = grid.size();
        int r = grid[0].size();
        
        vector<int> line;
        for (int i = 0; i < l; i++) {
            path.push_back(line);
            for (int j = 0; j < r; j++) {
                path[i].push_back(-1);
            }
        }
        return minPath(grid, l - 1, r - 1);
    }
    
    int minPath(vector<vector<int>>& grid, int i, int j) {
        if (path[i][j] != -1) return path[i][j];
        else {
            if (i == 0 && j == 0) {
                path[i][j] = grid[i][j];
                return path[i][j];
            }
            else if (i == 0) {
                path[i][j] = minPath(grid, i, j - 1) + grid[i][j];
                return path[i][j];
            }
            else if (j == 0) {
                path[i][j] = minPath(grid, i - 1, j) + grid[i][j];
                return path[i][j];
            }
            else {
                path[i][j] = min(minPath(grid, i, j - 1), minPath(grid, i - 1, j)) + grid[i][j];
                return path[i][j];
            }
        }
        
    }
};
