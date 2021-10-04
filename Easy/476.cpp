//     476. Number Complement
//     TIME TAKEN 40-50 minutes, small erros in lgoic for finding max power, also didnt read question properly so implemention was wrong
//     faster than 6.45%,  less than 5.69%
//     
    int findComplement(int num) {
        int power = 0;
        string str = "";
        
        while(num - pow(2, power) >= 0) {
            power++;
        }
        power = power - 1;
        cout << "max power: " << power << endl;
        
        // while(num > 0) {
        //     if(num - pow(2, power) >= 0) {
        //         num = num - pow(2, power);
        //         str = str + "1";
        //     }else{
        //         str = str + "0";
        //     }
        // }
        while(power >= 0) {
            if(num - pow(2, power) >= 0) {
                num = num - pow(2, power);
                str = str + "1";
            }else{
                str = str + "0";
            }
            power--;
        }
        cout << "binary form of num: " << str << endl;
        // str ones = "";
        // while(ones.length() < str.length()) {
        //     ones = ones + "1";
        // }
        
        for(int i=0; i<str.length(); i++) {
//             if(str[i] == '1' && ones[i] == '1') {
                
//             }
            if(str[i] == '1') {
                str[i] = '0';
                continue;
            }
            if(str[i] == '0') {
                str[i] = '1';
                continue;
            }
        }
        cout << str << endl;
//         power = 0;
//         while(pow(2, power) < num) {
//             if(num - pow(2, power) > 0) {
//                 power++;
//             }
//         }
//         power = power - 1;
//         cout << "power: " << power << endl;
        
        num =0;
        // for(int i=str.length()-1; i>=0; i-- ) {
        for(int i=0; i<str.length();i++ ) {
            if(str[str.length()-1-i] == '1') {
                cout << "here" << endl;
                num = num + pow(2, i);
            }
            // power--;
        }
        return num;
    }