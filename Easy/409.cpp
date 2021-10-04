 409. Longest Palindrome
//     TIME TAKEN: 27 minutes, small erors delayed process
//      faster than 74.94%, space less than 14.52% 
    int longestPalindrome(string s) {
        // cout << "s.length(): "<< s.length() << endl;
        map<char, int> dict;
        
        for(char c: s) {
            auto it = dict.find(c);
            if(it == dict.end()) {
                dict.insert(pair<char, int> (c, 1));
            }else{
                it->second = it->second + 1;
            }
        }
        int sum = 0;
        vector<int> odds;
        for(pair<char, int> p: dict) {
            if(p.second % 2 == 0) {
                sum = sum + p.second;
            }else{
                odds.push_back(p.second);
            }
        }
        
        if(odds.size() == 0) {
            return sum;
        }
        
        int largest_ind = 0;
        for(int i=0; i<odds.size(); i++) {
            if(odds[i] > odds[largest_ind]) {
               largest_ind = i;
            }
        }
        for(int i=0; i<odds.size(); i++) {
            if(i != largest_ind) {
                if(odds[i] -1 > 0) {
                    sum = sum + odds[i] - 1;
                }
            }
        }   
        return odds[largest_ind]+sum;
    }