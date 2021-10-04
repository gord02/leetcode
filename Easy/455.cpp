  455. Assign Cookies
//         TIME TAKEN: 35 minutes total, many approches taken in beginning that didnt work, poor planning
//         speed is slow, faster than 5.25%, space,  less than 77.35%
//     attempt two
        sort(g.begin(), g.end(), func);
        sort(s.begin(), s.end(), func);
        
        // for(int i=0; i<g.size(); i++) {
        //     if(s[i] > g[i]) {
        //         counter++;
        //     }else{
        //     }
        // }
        for(int gre: g) {
            for(int i=0; i<s.size(); i++) {
                if(s[i] >= gre) {
                    s.erase(s.begin() + i);
                    counter++;
                    break;
                }
            }
        }
        
        return counter;
        
    }