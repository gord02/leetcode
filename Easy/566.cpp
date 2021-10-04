//     time taken, 25 minutes in countining 
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int> > grid(r, vector<int> (c));
        int i =0;
        int n=0;
//         for(int row = 0; row<mat.size(); row++) {
//             for(int col = 0; col < mat[row].size(); col++) {
//                 if(i < r) {
//                     if(n <= c) {
//                         cout << "n value: " << n << endl;
//                         if(n == c) {
//                             n = 0;
//                             cout <<"broke" << endl;
//                             break;
//                         }
//                         cout << "here" << endl;
//                         grid[i][n] = mat[row][col];
//                         n++;
//                     }                    
//                 }
//             }
//             i++;
            
//         }
        int num = r*c;
        if(!(r*c == mat.size()*mat[1].size())) {
            return mat;
        }
        cout << "got past here" << endl;
        for(vector<int> vec: mat) {
            for(int d: vec) {
                if(i < r) {
                    if(n <= c) {
                        cout << "n value: " << n << endl;
                        if(n == c) {
                            n = 0;
                            cout <<"broke" << endl;
                            break;
                        }
                        cout << "here" << endl;
                        grid[i][n] = d;
                        n++;
                    }                    
                }
            }
            i++;
            
        }
        
        return grid;
        

    // ====
            int num = r*c;
        if(!(r*c == mat.size()*mat[1].size())) {
            return mat;
        }
//         for(vector<int> vec: mat) {
//             cout << "vec num: " << endl;
//             for(int d: vec) {
//                 cout << "this is d: " << d << endl;
//                 cout << "I: " << i << endl;
//                 if(i < r) {
//                     cout << "n value: " << n << endl;
                    
//                     if(n <= c) {
//                         if(n == c) {
//                             n = 0;
//                             cout <<"broke" << endl;
//                             break;
//                         }
//                         cout << "here" << endl;
//                         grid[i][n] = d;
//                         n++;
//                     }                    
//                 }
//             }
//             i++;  
//         }
//         =====
        for(vector<int> vec: grid) {
            cout << "vec num: " << endl;
            for(int d: vec) {
                cout << "this is d: " << d << endl;
                cout << "I: " << i << endl;
                if(i < mat.size()) {
                    cout << "n value: " << n << endl;
                    
                    if(n <= vec.size()) {
                        if(n == vec.size()) {
                            n = 0;
                            cout <<"broke" << endl;
                            break;
                        }
                        cout << "here" << endl;
                        cout << "mat[i][n]: " << mat[i][n] << endl;
                        d = mat[i][n];
                        cout << "d: " << d << endl;
                        n++;
                    }                    
                }
            }
            i++;
            
        }
        
        
        return grid;
        
    }