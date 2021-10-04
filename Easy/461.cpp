  // 461. Hamming Distance
//     TIME TAKEN: an hour ttotal between two days, but the question wanst very clear so it not my fault
//     speed is slow, faster than 5.02%, space less than 26.29%
//     
    int hammingDistance(int x, int y) {
        int power = 0;
        string str_x = "";
        string str_y = "";
        int d = x;
        while(d > 0) {
            if(d - pow(2, power) < 0) {
                break;
            }
            d = d - pow(2, power);
            power++;
        }
        if(x == 1) {
            power = 0;
        }
        for(power; power>=0; power--) {
            if(x - pow(2, power) >=0) {
               str_x = str_x + "1";
                x = x - pow(2, power); 
            }else{
               str_x = str_x + "0";
            }
        }
        power = 0;
        d= y;
        while(d > 0) {
            if(d - pow(2, power) < 0) {
                break;
            }
            d = d - pow(2, power);
            power++;
        }
        
        for(power; power>=0; power--) {
            if(y - pow(2, power) >=0) {
               str_y = str_y + "1";
                y = y - pow(2, power);
            }else{
               str_y = str_y + "0";
            }
        }
//         ===
        if(str_y.length() > str_x.length()) {
            while(str_x.length() < str_y.length()) {
                str_x = "0" + str_x;
            }
        }
         if(str_y.length() < str_x.length()) {
            while(str_x.length() > str_y.length()) {
                str_y = "0" + str_y;
            }
        }

        int count =0;
        for(int i=0; i<str_x.length(); i++) {
            if(str_x[i] != str_y[i]) {
                count++;
            }
        }
        return count;
    }