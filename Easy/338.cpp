// 338. Counting Bits
// Runtime: 13 ms, faster than 21.43% of C++ online submissions for Counting Bits.
// Memory Usage: 8.5 MB, less than 21.12% of C++ online submissions for Counting Bits.
class Solution {
public:
    vector<int> countBits(int n) {
//         final answer vector to return
        vector<int> res;
//         loop through all number from 0 to n
        for(int i=0; i<=n; i++) {
            //             calculate number of 1s in the number
            int count = 0;
            int x = i;
            while(x >0) {
                // /the last bit in i is a 1, we are only going to be checking the last bit and then moving all the bits in i over to the right until all the bits are zero which mean i = 0
                if((x& 1) == 1){
                    count++;
                }
                x= x>>1;
            }
            // cout << count << endl;
//                 push results to vector
            res.push_back(count);
        }

        
//         return vector
        return res;
    }
};


//     338. Counting Bits
//     TIME TAKEN: 16 minutes to implement AFTER I learned the trick with logs
//     Speed isnt that fast(n^2) faster than 8.95%, space, less than 41.80%
    vector<int> countBits(int n) {
//      calclate number of ones in bit version of the numbers from 0 to n
        vector<int> ans(n+1, 0);
//         to find max_power, use log trick (log(n)/log(2))
        for(int i=1; i<=n; i++) {
            int max_power = floor(log(n)/log(2));
            int num_1 = 0;
            int d = i;
            while(d >= 0) {
                if(max_power <0) {
                    break;
                }
                if(d - pow(2,max_power) >= 0) {
                // if(d - 2**max_power >= 0) {
                    d = d - pow(2,max_power); 
                    num_1 = num_1 + 1;
                }
                max_power--;   
            }
            ans[i] = num_1;
        }
        return ans;
    }