//     492. Construct the Rectangle
//   TIME TAKEN:  40 minutes give or take 5 minutes, small erros in logic and vector
//     not fast at all, 1308 ms, faster than 5.16%,  less than 32.08%
    
    vector<int> constructRectangle(int area) {
        vector<vector<int> > areas;
        // for(int n=2; n<=floor(area/2); n++) {
        // for(int n=area; n>=floor(area/2); n--) {
        for(int n=area; n>=1; n--) {
            vector<int> nums;
            if(area % n == 0) {
                int width = area/n;
                if(n < width) {
                    continue;
                }
                nums.push_back(n);
                nums.push_back(width);
                areas.push_back(nums);
            }
        }
        // int min_diff = 0;
        int min_diff = abs(areas[0][0] - areas[0][1]);
        vector<int> min_dim;
        for(int row=0; row<areas.size(); row++) {
            // cout << areas[row][0]  << " and " << areas[row][1] << endl;
            for(int vec=0; vec<areas[row].size(); vec++) {
                // cout << areas[row][0]  << " - " << areas[row][1] << endl;
                // if( abs(areas[row][vec][0] - areas[row][vec][1]) >= min_diff) {
                if( abs(areas[row][0] - areas[row][1]) <= min_diff) {
                    // cout << "old dif: " << min_diff << endl;
                    min_diff = abs(areas[row][0] - areas[row][1]);
                    // cout << "new dif: " << min_diff << endl;
                    min_dim.clear();
                   min_dim.push_back(areas[row][0]);
                   min_dim.push_back(areas[row][1]);
                }
            }
        }
        return min_dim;
    }