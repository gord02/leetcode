//     482. License Key Formatting
//     28 minutes, base cases did not work and messed up process
//     464 ms, faster than 5.33% , 7.8 MB, less than 99.15%
    string licenseKeyFormatting(string s, int k) {
//         base cases
        for(int i=0; i<s.size(); i++) {
             s[i] = toupper(s[i]);
        }
        // if(s.size() == 1) {
        //     return s;
        // }
        // if(s.size() < k) {
        //     return s;
        // }
        
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '-') {
                s.erase(i, 1);
                i--;
            }
        }
        // cout << "string: " << s << endl;
       
        for(int i=s.size()-1; i>=0; i--) {
            if(i-k < 0) {
                // cout << "here" << endl;
                return s;
            }else{
                s.insert(i-k+1, "-");
                i = i-k+1;
            }
        }
        return s;  
    }