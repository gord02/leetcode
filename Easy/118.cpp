// 118. Pascal's Triangle
// TIME Taken: hour and a half, completed over multiple days
vector<vector<int>> generate(int numRows) {
        vector<vector<int> > pyramid(numRows, vector<int> (numRows));
        
        vector<int> one(1, 1);
        // pyramid[0][0] = one;
//         access the first ector in the row of vectors
        // pyramid[0][0].push_back(one);
        pyramid[0] = one;
          if(numRows == 1) {
              return pyramid;
          }
        vector<int> second_row(2, 1);
        // pyramid[1].push_back(second_row);

        pyramid[1] = second_row;
        // for(vector<int> i: pyramid) {
        //     cout << i.size() << " " << flush;
        // }
//         intilializing one structure of pascaals triangle
        // for(vector i: pyramid) {
        //     for(int n: i) {
        //         cout << n << " " << flush;
        //     }
        //     cout << endl;
        // }
        for(int row = 2; row<numRows; row++) {
            // for(int index = 1; index <= (row-1); index++) {
                pyramid[row][0] = 1; 
                pyramid[row][row] = 1;
            // }
         }
        //  for(vector i: pyramid) {
        //     for(int n: i) {
        //         cout << n << " " << flush;
        //     }
        //     cout << endl;
        // }
        
        for(int row = 2; row<numRows; row++) {
//             row 2 = 1 2 1
//             row 3 = 1 3 3 1
            // vector<int> new_elements;
//             only need to fill in two row -1 elements at each row
            for(int index = 1; index <= (row-1); index++) {
                // new_elements.push_back(pyramid[row-1][index-1] + pyramid[row-1][index]);
                pyramid[row][index] = (pyramid[row-1][index-1] + pyramid[row-1][index]);
            }
//             loop to remove zeores from each row
            for(int i = 1; i < pyramid[row].size(); i++) {
                if(pyramid[row][i] == 0){
                    pyramid[row].erase(pyramid[row].begin()+i, pyramid[row].end());
                    
                }
            }
        }
        return pyramid;
    }