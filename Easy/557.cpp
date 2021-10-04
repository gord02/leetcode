//     557. Reverse Words in a String III
//     18 minutes, minor issues in code delayed the time, didn't account for imcrementing and incrememnting past size of string
//     32 ms, faster than 12.65%,  9.7 MB, less than 51.17%
    string reverseWords(string s) {
        int start = 0;
        while(start <= s.size()-1) {
            int end = 0;
            
//             find first char
            for(int i= start; i<s.size(); i++) {
                if(s[i] != ' ') {
                    start = i;
                    break;
                }
            }
            cout << "start = " << start << endl;
            
            end = start;
            while(s[end] != ' ') {
                if(end == s.size()) {
                    break;
                }
                end++;
            }
            end--;
            
            cout << "end = " << end << endl;
            
            int end_val = end;
//             swap chars
            while(start<=end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            start = end_val+1;
        }
        return s;
    }