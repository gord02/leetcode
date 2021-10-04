 // 500. Keyboard Row
//     TIME TAKEN: Didn't read question and all constraints so apporch was delayed 
//     speed, faster than 14.33%, space, less than 15.03%
    vector<string> findWords(vector<string>& words) {
        map<char, int> dict1;
        for(char c: "qwertyuiop") {
            dict1.insert(pair<char, int> (c, 1));
        }
        map<char, int> dict2;
           for(char c: "asdfghjkl") {
            dict2.insert(pair<char, int> (c, 1));
        }
        map<char, int> dict3;
           for(char c: "zxcvbnm") {
            dict3.insert(pair<char, int> (c, 1));
        }
        vector<string> new_string_vec;
        for(string s: words) {
           // s = tolower(s);
            cout << "== " << s << " ==" << endl;
            bool found = false;
            
            for(int i=0; i<s.length(); i++) {
                
                // cout << "s[i]: " << s[i] << flush;
                if(dict1.find(tolower(s[i])) == dict1.end()) {
                    cout << "breaking"<<endl;
                    break;
                }

                if(i == s.length()-1 && dict1.find(tolower(s[i])) != dict1.end()) {
                    new_string_vec.push_back(s);
                    found = true;
                }
            }
                
            if(found == true) {
                continue;
            }
//             ========
            for(int i=0; i<s.size(); i++) {
                if(dict2.find(tolower(s[i])) == dict2.end()) {
                    cout << "broken again" << endl;
                    break;
                }
                if(i == s.length()-1 && dict2.find(tolower(s[i])) != dict2.end()) {
                    new_string_vec.push_back(s);
                    found = true;
                }
            }
            if(found == true) {
                continue;
            }
//             ========
            
             for(int i=0; i<s.size(); i++){
                 if(dict3.find(tolower(s[i])) == dict3.end()) {
                    break;
                }
                if(i == s.length()-1 && dict3.find(tolower(s[i])) != dict3.end()) {
                    new_string_vec.push_back(s);
                }
            }
        }
        return new_string_vec;
        
        
    }