class Solution {
public:
// could have optimitexd 
    // 66. Plus One
//     time taken: 10 minutes
    // Runtime: 12 ms, faster than 7.22% of C++ online submissions for Plus One.
// Memory Usage: 8.9 MB, less than 12.12% of C++ online submissions for Plus One.
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i=digits.size()-1; i>=0; i--) {
            int new_d = carry + digits[i];
            if(new_d > 9) {
                carry = 1;
                digits[i] = new_d -10;
            }else{
                digits[i]  = new_d;
                carry = 0;
            }
        }
        if(carry == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

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