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