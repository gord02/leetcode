// 136. Single Number
// TIME TAKEN: maybe around 1 hour 
// very slow, better than 5.4% and somewhat space inefficent, 23%
// implement using hash function 
// TIME TAKEN fro hashfunction(map) approach, 17 mins
// still just as slow and space inefficient 
int partition(vector<int> &nums, int left, int right) {
        int x = nums[left];
        int j = left;
        
        for(int i = left + 1; i<=right; i++) {
            if(nums[i] <= x) {
                j++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[j], nums[left]);
        return j;
    }
    void quicksort(vector<int> &nums, int left, int right) {
        if(left >= right) {
            return;
        }
        int m = partition(nums, left,right);
        quicksort(nums, left, m-1);
        quicksort(nums, m+1, right);
        
    }
    int singleNumber(vector<int>& nums) {
//         sort array of numbers
//         find element that isnt the same as adjecent element
        int left = 0;
        int right = nums.size()-1;
        quicksort(nums, left, right);
        // for(int i: nums) {
        //     cout << i << " " << flush;
        // }
        cout << endl;
        // for(int i = 0; i<=nums.size()-1; i++) {
        //     int j = i+1;
        //     // if(j )
        //     if(nums[i] != nums[j]) {
        //         erase. 
        //     }
        // }
        int i = 0;
        // vector<int>::iterator it = nums.being();
        // cout << "is valid: " << *it << endl;
        while(nums.size() > 0) {
            if(i+1 >= nums.size()) {
                return nums[i];   
            }
            // cout << nums[i] << " vs "<< nums[i+1] << endl;
            if(nums[i] == nums[i+1]) {
                // int new_i = i+2;
                nums.erase(nums.begin()+i+1);
                nums.erase(nums.begin()+i);
                // i=0;
                // i = new_i;
            }else{
                return nums[i];   
            }
        }
//         IDEA 2: Hasfucntion and count everything inside array
        
        return 0;
    }
    