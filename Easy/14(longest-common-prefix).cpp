// ======== TIME TAKEN: 1 HOUR 30 MIN APPROXIMATELY ========
string longestCommonPrefix(vector<string>& strs) {
        string new_string = string("");
        if(strs.size() == 1) {
            if(strs[0] == "") {
                return new_string;
            }
            new_string = strs[0][0];
            return new_string;
        }
//         find smallest size of string
        int min_string_ind = 0;
        for(int i=1; i<strs.size(); i++) {
            if(strs[i].size() < strs[min_string_ind].size()) {
                min_string_ind = i;
            }
        }
        
//         move smallest string to front of array for simplicity 
        swap(strs[0], strs[min_string_ind]);
        
        if(strs[0].empty()) {
            return new_string;
        }
    
        vector<char>vec;

        while(strs[0].empty() == false) {
            bool broken = false;
            char c = *strs[0].begin();
            vec.push_back(c);
            for(int i=1; i<strs.size(); i++) {
                if(c != *strs[i].begin()) {
                    strs[i].erase(strs[i].begin());   
                    broken = true;
                    break;
                }
                strs[i].erase(strs[i].begin()); 
            }
//           compared all string chars to c char so not erase c char
            strs[0].erase(strs[0].begin()); 
            if(broken) {
                vec.pop_back();
                break;
            }
        }
        
        for(char s: vec) {
           new_string = new_string +s;
        }
        return new_string;
    }