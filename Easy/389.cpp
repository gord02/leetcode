//     389. Find the Difference
//     TIME TAKEN: 10 minutes
//      faster than 76.58%, space  less than 9.54%
    char findTheDifference(string s, string t) {
//         put chars from s int map
        map<char, int> dict;
        for(char c: s) {
            auto it = dict.find(c);
            if(it == dict.end()) {
                dict.insert(pair<char, int> (c, 1));
            }else{
                it->second = it->second + 1;
            }
        }
//         iteratr thorugh chars in t, if not found in s, return that char
        for(char c: t) {
            auto it = dict.find(c);
            if(it == dict.end()) {
                return c;
            }else{
                if(it->second - 1< 0) {
                    return c;
                }
                it->second = it->second - 1;
            }
        }
        return 'c';
    }