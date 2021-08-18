 int romanToInt(string s) {
        vector<int> vec_of_s;
        int sum = 0;
//         convert charcters to numbers
        for(int i=0; i<s.size();i++) {
            if(s[i] == 'I') {
                vec_of_s.push_back(1);
                // swap(s[i], '1');
            }
            if(s[i] == 'V') {
                vec_of_s.push_back(5);
                // swap('V', '5');
            }   
            if(s[i] == 'X') {
                 // swap('X', '10');
                vec_of_s.push_back(10);
            }      
            if(s[i] == 'L') {
                 // swap('L', 50);
                vec_of_s.push_back(50);
                
            }      
            if(s[i] == 'C') {
                 // swap('C' , 100);
                vec_of_s.push_back(100);
                
            }     
            if(s[i] == 'D') {
                 // swap('D' , 500);
                vec_of_s.push_back(500);
                
            }     
            if(s[i] == 'M') {
                 // swap('M' , 1000);
                vec_of_s.push_back(1000);
                
            }  
        }

        for(int i=0; i<=vec_of_s.size()-1;i++) {
            if(i + 1> vec_of_s.size() -1) {
                sum = sum + vec_of_s[i];
            }
            else{
                if(vec_of_s[i] >= vec_of_s[i+1]) {
                    sum = sum + vec_of_s[i];
                }
                // pair is made
                else{
                    sum = sum + vec_of_s[i+1] - vec_of_s[i];
                    i++;
                }
            }
        }
        return sum;
    }
};