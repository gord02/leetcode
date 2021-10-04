//     j>i, decsending order, j<i, ascending order 
    static bool func(int j, int i) {return(j>i);}
    // 506. Relative Ranks
//     TIME TAKEN, 36 minutes, but not my fault since sorting fucntion decide to sort vector in descending order
//      faster than 5.08%, less than 29.40%
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> nums = score;
        sort(nums.begin(), nums.end(), func);
        map<int, int> dict;
        for(int i: nums) {
            cout << i << flush;
        }
        cout << endl;
        for(int i=0; i<nums.size(); i++) {
            // dict.insert(pair<int, int> (nums[i], nums.size()-1-i));
            dict.insert(pair<int, int> (nums[i], i));
        }
        for(int i=0; i<score.size(); i++) {
            auto it = dict.find(score[i]);
            cout << "it->second: " << it->second << " score[i]: " << score[i] << endl;
            score[i] = it->second + 1;
        }
        vector<string> strs(score.size(), "");
        for(int i=0; i<score.size(); i++) {
            if(score[i] == 1) {
                strs[i] = "Gold Medal";
            }
            else if(score[i] == 2) {
                strs[i] = "Silver Medal";
            }
            else if(score[i] == 3) {
                strs[i] = "Bronze Medal";
            }
            else{
                strs[i] = to_string(score[i]);
            }
        }
        for(int i: score) {
            cout << i << flush;
        }
        return strs;
    }