//     345. Reverse Vowels of a String
//     TIME TAKEN: 25, had to fix a lot of problems: DIDN'T WATCH OUT FOR CAPITALS!!, didn't increment start and end so infinite loop, didn't account for none vowels being swatched due to incrmenting of start and end
//   faster than 5.67%, space  less than 65.01%
//    
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() -1;
        while(start <= end) {
//             for loop to find first char to swap
            cout << "start in beginning: " << start << endl;
            for(int i=start; i<=end; i++) {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                    start = i;
                    break;
                }
            }
            cout << "start after: " << start << endl;
            cout << "end before: " << end << endl;
//             for loop to find second char to swap
            for(int i=end; i>=start; i--) {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                    end = i;
                    break;
                }
            }
            cout << "end after: " << end << endl;
//             if start and end were not updated, don't swap
            if(s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' || s[start] == 'A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U') {        
                if(s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U') {
                    swap(s[start], s[end]);
                } 
            }
            start++;
            end--;
        }
        return s;
    }