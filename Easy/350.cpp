//     350. Intersection of Two Arrays II
//     TIME TAKEN: 10 minutes,
    // 4 ms, faster than 89.14%, 10.6 MB, less than 33.13%
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> dict;
        for(int num: nums2) {
            auto it = dict.find(num);
            if(it == dict.end()) {
                dict.insert(pair<int, int> (num, 1));
            }else{
                it->second = it->second + 1;
            }
        }
        nums2.clear();
        for(int num: nums1) {
            auto it = dict.find(num);
            if(it != dict.end()) {
                if(it->second - 1 >=0) {
                    nums2.push_back(num);
                    it->second = it->second - 1;
                }
            }
        }
        return nums2;
    }