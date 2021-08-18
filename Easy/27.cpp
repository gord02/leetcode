// TIME TAKEN: 1 full hour

// 27. Remove Element

 int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) {
            return nums.size();
        }
//         for loop to swap about val with 101
        for(int i =0 ; i <nums.size(); i++) {
            if(nums[i] == val) {
                nums[i] = 101;
            }
        }
//         for loop to move 101 to end of array
//         array does not need to be sorted so start adding 101 from the end
        
        for(int i =0 ; i < nums.size()-1; i++) {
            if(nums[i] == 101) {
//                 find right most position to swap to
                for(int k = nums.size()-1 ; k >=0; k--) {
                    if(k <= i) {
                        break;
                    }
                    if(nums[k] != 101) {
                        cout << "this is k: " << k << " this is i: " << i << endl;
                        // j = k;
                        swap(nums[i], nums[k]);  
                        break;
                    }
                }
            }
        }
//         =======
//         cout << "size: "<< nums.size() << endl;
        
//         for(int i: nums) {
//             cout << i << " " << flush;
//         }
//          ========== 
        int k =0;
        for(int i: nums) {
            if(i == 101){
                break;
            }else{
                k++;
            }
        }
        return k;
    }
