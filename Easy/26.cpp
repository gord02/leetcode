// time taken: 40 minutes, very inefficient in terms of space and speed
int removeDuplicates(vector<int>& nums) {
//         we are give a sorted vector therfore just linear search through vector with to iterators making sure there are no duplicates
//         once a duplicate is removed erase element by swaping it with undersocre, break 
        if(nums.size() <= 1) {
            return nums.size();
        }
        
        for(int i = 0; i<nums.size()-1; i++) {
            int j= i+1;
            if(j >= nums.size()) {
                break;
            }
            if(nums[i] == nums[j]) {
                nums[i] = 101;
            }
        }
//         for loop to move underscores to back of vector
//         swap -1 with first none -1 element in array
        for(int i = 0; i<nums.size()-1; i++) {
            cout << "loop #: " << i << endl;
            if(nums[i] == 101) {
                cout << "-1 at i equal to: " << i << endl;
//                 for loop to find FIRST NON -1 element 
                    for(int j = i+1; j<=nums.size()-1; j++) {
                        if(nums[j] != 101) {
//                             nums i is -1 one 
                            swap(nums[i], nums[j]);
                            break;
                        }
                    }
            }
        }
        
        int k = 0;
        for(int i: nums) {
            if(i == 101) {
                break;
            }else{
                k++;
            }
        }
        
        return k;
    }