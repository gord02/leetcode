// TIME TAKEN: 26 MINUTES
int lengthOfLastWord(string s) {
        int space = 0;
        
//         find second iteration of space starting from the back of the string
        for(int i=s.length()-1; i>=0; i--) {
            if(s[i] == ' ' && i != s.length()-1 ) {
                if(i+1 == s.length()) {
                    space = i;
                    break;
                }
                else if(s[i+1] != ' ') {
                    // cout << "index: "<< i+1 <<"what is here:" << s[] << endl;
                    cout << "getting here" << endl;
                    space = i;
                    break;
                }
           
            }
        }
        // cout << "space: " << space << endl;
        int letter =0;
//         count letter
        for(int i=space; i<=s.length()-1; i++) {
            if(s[i] != ' ') {
                letter++;
            }
            if(letter > 0 && s[i] == ' ') {
                break;
            }
        }
        return letter;
    }