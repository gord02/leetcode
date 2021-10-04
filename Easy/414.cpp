//     414. Third Maximum Number
//     TIME taken: 13 minutes and an error and that end I didnt conut, small errors delayed time
//     not very fast, faster than 6.14%, less than 84.73%
    static bool func(int i, int j) {
        return(i<j);
    }
    int thirdMax(vector<int>& nums) {
//         just sort array, then subtract size -1 - 2 to get thrid last position, if this doesnt exist return that last index size -1 
//         to accout for unqiue distinct numbers, filter through and erase reapeting values
        sort(nums.begin(), nums.end(), func);
        if(nums.size() < 3) {
            return nums[nums.size()-1]; 
        }
        for(int i= 0; i<nums.size()-1; i++) {
            if(nums[i] == nums[i+1]) {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        // cout << "got here" << endl;
        // cout << "nums.size(): " << nums.size() << endl;
        // cout << "sbutract: " << nums.size()-3 << endl;
        // if((nums.size()-3) < 0) {
        if(nums.size() < 3) {
            // cout << "in here" << endl;
            return nums[nums.size()-1];
        }
        return nums[nums.size()-3];
    }
    //     Different approach
//     push values into map, # of occureances doesnt matter,
//     make one for loop to find maximum, if size of map is less than three return the max
//     make another for loop for second and third max, excluding the values of the other maxes and return thrid max
//     time is linear but is this worth it? it is not exactly clean