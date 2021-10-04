 // 268. Missing Number
//    TIME TAKEN:  13 minutes
//     faster than 5.73% , space time less than 93.20% 
    int parition(vector<int> &nums, int left, int right) {
        int x = nums[left];
        int j = left;
        for(int i=left+1; i<= right; i++) {
            if(nums[i] <= x) {
                j++;
                swap(nums[i], nums[j]);
            }
         }
        swap(nums[j], nums[left]);
        return j;
    }
    void quickSort(vector<int> &nums, int left, int right) {
        if(left>= right) {
            return;
        }
        int m = parition(nums, left, right);
        quickSort(nums, left, m-1);
        quickSort(nums, m+1, right);
    }
    int missingNumber(vector<int>& nums) {
//         sort array
//         using counter, compare the first index of array to counter, if not equal, return the counter number, if end of array, return counter + 1
        int left = 0;
        int right = nums.size()-1;
        quickSort(nums, left, right);
        for(int i:nums) {
            cout << i << " " << flush;
        }
        int counter = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != counter) {
                return counter;
            }
            counter++;
        }
        return counter = nums.size();
    }
//     a second approach would be to put all values into map while still using counter, if counter isn't in map, return it