//     344. Reverse String
//     TIME taken: 4 minutes, could have been at most 3
//      faster than 93.60%,  less than 75.37% 
    void reverseString(vector<char>& s) {
//         just swap chars
        for(int i= 0; i< floor(s.size()/2); i++) {
            swap(s[i], s[s.size()-1 -i]);   
        }
    }