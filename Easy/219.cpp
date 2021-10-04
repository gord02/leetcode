//   219. Contains Duplicate II  
//     TIME TSKEN: 32 minutes, not too difficult of a problem but many small errors and debugging made it take longer
//     faster than 19.92%, less memory than 6.24%
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size() == 1) {
            return false;
        }
        // for(int i=0; i<=nums.size()-1; i++) {
        int i=0;
        while(i<=nums.size()-1) {
            cout << "i: " << i << endl;
//             check back
            map<int, int> dict;
            if(!(i-3 < 0)){
                 for(int j=i-k; j<=i; j++) {
                    if(dict.find(nums[j]) != dict.end()) {
                        return true;
                    }else{
                        dict.insert(pair<int, int> (nums[j], 1));
                    }
                }
            }
            dict.clear();
            for(int j=i; j<=i+k; j++) {
                if(j >= nums.size()) {
                    return false;
                }
                if(dict.find(nums[j]) != dict.end()) {
                    return true;
                }else{
                    // cout << "here" << endl;
                    dict.insert(pair<int, int> (nums[j], 1));
                }
            }
            i = i +k+1;
        }
        return false;
    }