//     383. Ransom Note
//     TIME TAKEN: 12 minutes, minor error at end slowed down process 
//      faster than 22.05%, space less than 38.15% 
    
    bool canConstruct(string ransomNote, string magazine) {
//         put magazine chars into dictionary, with their occurences 
        // then do find, subtract from pair value, if negative, return false
        map<char, int> dict;
        for(char c: magazine) {
            auto it =  dict.find(c);
//            char is not in dctionary yet, add it
            if(it == dict.end()) {
                dict.insert(pair<char, int> (c, 1));
            }else{
                it->second = it->second + 1;   
            }
        }
        
        for(char c: ransomNote) {
            auto it = dict.find(c);
            if(it == dict.end()) {
                return false;
//                 char is found in dict, denumerate pair value
            }else{
                if( (it->second -1) < 0) {
                    return false;
                }
                it->second = it->second -1;
            }
        }
        return true;
    }