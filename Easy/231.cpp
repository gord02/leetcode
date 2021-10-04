 231. Power of Two
//     TIME taken: 23 minutes but my solution was guess and test until I found something that worked for all test cases
//     not even very fast  faster than 32.03%, less than 20.09%
    bool isPowerOfTwo(int n) {
        if(n == 1 || n == 2) {
            return true;
        }
        if(n % 2 != 0) {
            return false;
        }
        // long long d = n;
        double d = n;
        // if()
        while(d>0) {
            if(d == 4) {
                cout << "here" << endl;
                return true;
            }
            if(d < 4) {
                return false;
            }
            d= d/2;
            cout << "ceil(d) : " << ceil(d)  << " d: " << d << endl;
            if(ceil(d) - d > 0) {
                return false;
            }
            // d= ceil(d/2);
            // if()
        }
        return false;
    }