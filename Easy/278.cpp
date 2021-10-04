 // 278. First Bad Version
//     TIME TAKEN: 37 minutes, I was very slow to implement binary search, and it seems the binary search neccessay for this question is different than normal, right was set to mid not mid -1, provbably due to 1 based indexing idk
// Speed is very good  faster than 100.00%, space is less than 64.23%
    int firstBadVersion(int n) {
//         brute froce approach would be to just start from the first number beoffe n and move donwards until true is found, but i sslow
//         Optimized, implement and binary search for the boolean true on the give numbers. If false move closer to n, if true(there is a bad version) move closer to 1.
        int left = 1;
        int right = n;
        // for(int i= floor((right-left)/2)+left; i<=right;)
        // int i=0;
        // l
        while(left <= right) {
            cout << "left: " << left << " right: " << right << endl;
            if(left == right) {
                cout << "left and right: " << left << " " << right << endl;
                break;
            }
            int m= floor((right-left)/2)+left;
            cout << "m: " << m << endl;
            if(isBadVersion(m) == true) {
                // right = m-1;
                right = m;
            }else{
                // right = m-1;
                left = m+1;
            }
        }
        return right;
    }