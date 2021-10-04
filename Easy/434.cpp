//       434. Number of Segments in a String
//       TIME TAKEN: 14 minutes, many small erros and scenrios I did not account for 
//         speed, faster than 100.00%, space, less than 91.43%
        if(s.length() == 0) {
            return 0;
        }
        
        bool non_space = false;
        int counter = 1;
        int spaces = 0;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] != ' ') {
                non_space = true;
            }
            if(s[i] == ' ') {
                spaces++;
            }
            if(s[i] == ' ' && non_space) {
                if(i+1 < s.length()) {
                    if(s[i+1] != ' ') {
                        counter++;   
                        non_space = false;
                    }
                }
            }
        }
        if(spaces == s.length()) {
            return 0;
        }
        return counter;
    }