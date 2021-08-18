    // 45 mintyes but too slow
    int strStr(string haystack, string needle) {
//         find substring in string
        // int le_ind = -1;
        
//         base cases
        if(haystack.length() == 0 && needle.length() == 0) {
            return 0;
        }
        if(haystack.length() == 0 && needle.length() != 0) {    
            return -1;
        }
        if(haystack.length() != 0 && needle.length() == 0) {    
            return 0;
        }
        if(haystack.length() < needle.length()) {
            cout << "made mistake" << endl;
            return -1;
        }

        
        for(int j=0; j<=haystack.length()- needle.length(); j++) {
        // for(int j=0; j<=haystack.length()-1; j++) {
            cout << "loop #: " << j << endl;
            vector<int> is;
            int new_j = j;
            for(int i=0; i<=needle.length()-1; i++) {
                cout << "inner loop #: " << i <<endl;

                // if(i = needle.length()-1) { // why is this wrong??
           
                if(haystack[new_j] == needle[i]) {
                    // le_ind = j;
                    cout << "got here" << endl;
                    is.push_back(j);
                    new_j++;
                }else{
                    is.clear();
                    break;
                }
                if(i >= needle.length()-1) { 
                    cout << "getting here" << endl;
                    return is[0];
                }
            }
        }
        return -1;
    }
        