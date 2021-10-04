//     217. Contains Duplicate
//     TIME TAKEN: 19 mins, 15 minutes for sorting and search apporach which didn't work and 4 minutes to implement dictionary 
//     speed is not very good, 26.1% better, space efficientcy is not much better 21.8%

//     OPINION
//     ==========
// WHAT do you think?
//     Should I have known to go with dictionary approach and the sorting would've taken to long(for intervirews)
    
    // int partition(vector<int> &nums, int left, int right, bool &found) {
    //     int x = nums[left];
    //     int j = left;
    //     for(int i=left+1; i<=right; i++) {
    //         if(nums[i] <= x) {
    //             if(nums[i] == x) {
    //                 found = true;
    //             }
    //             j++;
    //             swap(nums[i], nums[j]);
    //         }
    //     }
    //     swap(nums[left], nums[j]);
    //     return j;
    // }
    //  int partition(vector<int> &nums, int left, int right, bool &found) {
    //     int x = nums[left];
    //     int j = left;
    //     for(int i=left+1; i<=right; i++) {
    //         if(nums[i] <= x) {
    //             if(nums[i] == x) {
    //                 found = true;
    //                 return j;
    //             }
    //             j++;
    //             swap(nums[i], nums[j]);
    //         }
    //     }
    //     swap(nums[left], nums[j]);
    //     return j;
    // }
    // void quicksort(vector<int> &nums, int left, int right, bool &found) {
    //     if(left>= right) {
    //         return;
    //     }
    //     int m = partition(nums, left, right, found);
    //     if(found) {
    //         return;
    //     }
    //     quicksort(nums, left, m-1, found);
    //     quicksort(nums, m+1, right, found);
    // }
    bool containsDuplicate(vector<int>& nums) {
//         option 1:
//         sort array using quick sort then use two marks in array to comare values
        // int left = 0;
        // int right = nums.size()-1;
        // bool found = false;
        // // quicksort(nums, left, right, found);
        // if(found) {
        //     return true;
        // }
        // int j= 1;
        // for(int i=0; i<nums.size()-1; i++) {
        //     if(nums[i] == nums[j]) {
        //         return true;
        //     }
        //     j++;
        // }
        
//         algo 2
        map<int, int>dict;
        for(int i: nums) {
            if(dict.find(i) != dict.end()) {
                return true;
            }else{
                dict.insert(pair<int, int> (i, 1));
            }
        }
        return false;
    }