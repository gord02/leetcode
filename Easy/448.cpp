//     448. Find All Numbers Disappeared in an Array
// TIME TAKEN: 9 minutes, started by implementing a solution that didn't work then switched to one that did
//     speed is slow, faster than 5.30%, space, less than 6.61% 
    
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
//         psuhing to map
        map<int, int> dict;
        for(int i=0; i<nums.size(); i++) {
           dict.insert(pair<int, int>(nums[i], 1));
        }
        
// look for interger
        nums.clear();
        for(int i=1; i<=n; i++) {
           auto it = dict.find(i);
            if(it == dict.end()) {
//                 int is NOT found in map, therefore add it to new vec
                nums.push_back(i);
            }
        }
        return nums;
    }