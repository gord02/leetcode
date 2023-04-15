class Solution {
public:
    // 387. First Unique Character in a String
//     time taken: 6 minutes
    // Runtime: 52 ms, faster than 56.18% of C++ online submissions for First Unique Character in a String.
// Memory Usage: 10.7 MB, less than 71.90% of C++ online submissions for First Unique Character in a String.

    int firstUniqChar(string s) {
        vector<int> chars(26, 0);
        for(int i=0; i< s.length(); i++) {
            chars[s[i]-'a']++;
        }
        for(int i=0; i< s.length(); i++) {
            if(chars[s[i]-'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};

//     387. First Unique Character in a String
//     TIME TAKEN: very long time, didn't realize the order that pairs are placed into map
//     faster than 24.79%, space, less than 13.89%
    int firstUniqChar(string s) {
        // map<char, vector<int> vec(2)> dict;
        map<char, vector<int>> dict;
        for(int i=0; i<s.length(); i++) {
            auto it = dict.find(s[i]);
//             char is not in map, add it
            if(it == dict.end()) {
                vector<int> nums(2);
                nums[0] = 1;
                nums[1] = i;
                dict.insert(pair<char, vector<int>> (s[i], nums));
            }else{
//                 update exisitng pair
               // auto vec  = it->second;
                it->second[0] = it->second[0] + 1;
                // vec[0] = vec[0] + 1;
            } 
        }
        // for(pair<char, vector<int>> p: dict) {
        //     cout << p.second[0] << " " << flush;
        // }
        // cout << endl;
        
//         inst working becuase its not necssary orngaized by how the keys are inserted into map, try to search through by index
        vector<vector<int> > vec_singles;
        // pair<char, vector<int>> prime_pair = pair<char, vector<int>> ('c', );
        // int ind = -1;
        for(pair<char, vector<int>> p: dict) {
            // cout << p.second[0] << " " << flush;
            if(p.second[0] == 1) {
                // if(p.second[1] < prime_pair[1] || ) {
                //     prime_pair = p.second[1];
                // }
                // if(p.second[1] < vec[1]) {
                //     vec = p.second;
                // }
                cout << "found pos:" << p.second[1] << endl;
                vec_singles.push_back(p.second);
            }
        }
        if(vec_singles.size() == 0) {
            return -1;
        }
        int smallest_ind = s.size()-1;
        // cout << "smallest_ind: " << smallest_ind << endl;
        for(int i=0; i<vec_singles.size(); i++) {
            // for(int i=0; i<)
            // cout <<"vec_singles[i][1]: " << vec_singles[i][1] << " smallest_ind: " << smallest_ind << endl;
            if(vec_singles[i][1] < smallest_ind) {
                smallest_ind = vec_singles[i][1];
                // cout << "getting here" << endl;
            }
        }
        return smallest_ind;
    }