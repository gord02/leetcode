// 119. Pascal's Triangle II
// TIME taken: 18 minutes, in part due to doing the other pascals triangle question eralier 
vector<int> getRow(int rowIndex) {
        vector<vector<int>> pyramid(rowIndex+1, vector<int> (rowIndex+1));
        
//         initalize 
        vector<int> row_zero(1, 1);
        vector<int> row_one(2, 1);
        if(rowIndex == 0) {
            return row_zero;
        }
         if(rowIndex == 1) {
            return row_one;
        }
        pyramid[0] = row_zero;
        pyramid[1] = row_one;
        
        for(int row = 2; row <= rowIndex; row++) {
            pyramid[row][0] = 1;
            pyramid[row][row] = 1;
            
            for(int index = 1; index < pyramid[row].size(); index++) {
                pyramid[row][index] = pyramid[row-1][index-1] + pyramid[row-1][index];
            }
            
            //         for loop to erase zeores
            for(int i = 2; i < pyramid[row].size(); i++) {
                if (pyramid[row][i] == 0) {
                    pyramid[row].erase(pyramid[row].begin() + i, pyramid[row].end());
                    break;
                }
            }
        }
        

        return pyramid[rowIndex];
    }