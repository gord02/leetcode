//     374. Guess Number Higher or Lower
//     TIME TAKEN: 11 minutes
//     speed is good faster than 100.00%, space less than 64.76% 
    int guessNumber(int n) {
        int left = 1;
        int right = n;
//         max number of tries nesscessary to guess number
        // for(int i= 1; i<=n; i++) {
        while(left <= right) {
            int m = floor((right-left)/2) + left;
            
            if(guess(m) == 0) {
                return m;
            }
            if(guess(m) == -1) {
                right = m;
            }
            else {
                left = m+1;
            }
        }
        return 0;
    }