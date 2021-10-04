//     412. Fizz Buzz
//     TIME TAKEN: 13 minutes, some small errors but this error that isnt even my fault, why doesnt this work??
//     speed not that great, faster than 5.15%, space, less than 99.79%
    vector<string> fizzBuzz(int n) {
        vector<string> arr(n, "");
        for(int i=1; i<=n; i++) {
            // if(i % 3 == 0 && i % 5 == 0) {
            //     arr[i-1] = "FizzBuzz";
            // }
            if(i % 3 == 0) {
                if(i % 5 == 0) {
                    arr[i-1] = "FizzBuzz";
                    continue;
                }
                arr[i-1] = "Fizz";
            }
            if(i % 5 == 0) {
                arr[i-1] = "Buzz";
            }
            if(i % 5 != 0 && i % 3 != 0) {
                arr[i-1] = to_string(i);
            }
        }
        return arr;
    }