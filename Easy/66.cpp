// PLUS ONE
// TIME: 33 minutes
// 
vector<int> plusOne(vector<int>& digits) {
//        acess back of vector and increment the value
//         nine is the only number that alters the number of elements in array 
        for(int i=digits.size()-1; i>= 0; i--) {
            if(i == digits.size()-1 && digits[i] != 9) {
                digits[digits.size()-1] = digits[digits.size()-1] +1;  
                break;
            }
            else if(digits[i] == 9) {
//         nine is encountered, set the current element to zero then "carry over" a one  
                digits[i] = 0;
                if(i-1 < 0) {

                    digits.insert(digits.begin() +i, 1);
                }else{
                    
                    if( digits[i-1] != 9) {
                        // cout << "in here " << digits[i-1] << endl;
                        digits[i-1] =  digits[i-1] +1;
                        break;
                        
                    }
                }
                    
            }
        }
        
//         return the vector
        return digits;
    }