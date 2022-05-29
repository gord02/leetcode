class Solution {
public:
//     14. Longest Common Prefix
// time taken: 14 minutes 
//     didnt consider BASE CASE!!!!!, if there is only one string 
        // Runtime: 53 ms, faster than 5.33% of C++ online submissions for Longest Common Prefix.
// Memory Usage: 16.3 MB, less than 5.67% of C++ online submissions for Longest Common Prefix.
    string longestCommonPrefix(vector<string>& strs) {
        map<string, int> dict;
        priority_queue<string> q;
        for(int i=0; i<strs.size(); i++) {
            for(int j=1; j<=strs[i].length(); j++) {
                string prefix = strs[i].substr(0, j);
                auto it = dict.find(prefix);
                if(it == dict.end()) {
                    dict.insert(pair<string, int> (prefix, 1));
                    if(1 == strs.size()) {
                        q.push(prefix);
                    }
                }else{
                    it->second++;
                    if(it->second == strs.size()) {
                        q.push(it->first);
                    }
                }
            }
        }
        if(q.empty() == true) {
            return "";
        } 
        return q.top();
    }
};


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