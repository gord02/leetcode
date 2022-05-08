// 62. Unique Paths
//     Time taken: 15 minutes,
    // Runtime: 0 ms, faster than 100.00% of C++, Memory Usage: 6.5 MB, less than 38.84% 
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m, vector<int> (n));
        // int count = 0;
         for(int row= 0; row<grid.size(); row++) {
              grid[row][0] = 1;
         }

        for(int col= 0; col<grid[0].size(); col++) {
              grid[0][col] = 1;
        }
        
        for(int row= 1; row<grid.size(); row++) {
            for(int col= 1; col<grid[row].size(); col++) {
//                                  get up,                get left 
                grid[row][col] = grid[row-1][col] + grid[row][col-1];
            }
        }
        
        return grid[m-1][n-1];
    }