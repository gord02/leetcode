//     551. Student Attendance Record I
//     TIME TAKEN: 10 minutes, small erros here and there
//     0 ms, faster than 100.00%, 6.4 MB, less than 31.31%
    // bool checkRecord(string s) {
    //     int count = 0;
    //     for(int i=0; i<s.size(); i++) {
    //         if(s[i] == 'L') {
    //             count ++;
    //             if(count >= 3) {
    //                 return false;
    //             }
    //         }else{
    //             count = 0;
    //         }
    //     }
    //     map<char, int> dict;
    //     for(int i=0; i<s.size(); i++) {
    //         auto it = dict.find(s[i]);
    //         if(it == dict.end()) {
    //             dict.insert(pair<char, int> (s[i], 1));
    //         }else{
    //             it->second = it->second +1;
    //             if(it->first == 'A' && it->second >= 2) {
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
//     attempt to omptimize
      bool checkRecord(string s) {
        int count = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'L') {
                count ++;
                if(count >= 3) {
                    return false;
                }
            }else{
                count = 0;
            }
        }
        count = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'A') {
                count++;
                if(count >= 2) {
                    return false;
                }
            }
        }
        return true;
    }