// search-insert-position
// TIME: VERY LONG TIME, many small problems in code that delayed the process
int binarySearch(int left, int right, vector<int> nums, int target) {

        int m = floor((right-left)/2) + left;
        
        if(nums[m] == target) {
            return m;
        }
        
        else if(nums[m] > target) {
             int new_right = m-1;
             int new_left = left;
            
            if(new_left > new_right) {  
                return left;
            }else{
                return binarySearch(left, m-1, nums, target);
            }
        }
        else{
            int new_left = m+1;
            int new_right = right;
            if(new_left > new_right) {
                cout <<"left " << left << " new_left: " << new_left << endl;
                cout <<"used 2" << endl;
                return left+1;
            }else{
                return binarySearch(m+1, right, nums, target);
            }
        }
            
        
    }
    int searchInsert(vector<int>& nums, int target) {
//         use binary search
        int index = binarySearch(0, nums.size()-1,nums, target);
        return index;
    }