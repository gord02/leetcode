//     283. Move Zeroes
//     Time taken: 9 minutes, wasn't very sure the best way to erase nums from vector
//     faster than 15.17%, space  less than 58.52%
//     combining the for loop objectives decreased the space time, less than 84.21%, but speed is the same. Should be faster than linear? or 
//     void moveZeroes(vector<int>& nums) {
// //         erase index, then AFTER the for loop, apend how many zeroes were encountered to the end
//         int count =0;
//         for(int i=0; i<nums.size(); i++) {
//             if(nums[i] == 0) {
//                 // nums.erase(nums.begin()+i);
//                 count++;
//             }
//         }
//         for(int i=0; i<nums.size(); i++) {
//             if(nums[i] == 0) {
//                 nums.erase(nums.begin()+i);
//                 i--;
//             }
//         }
        
//         for(int i=1; i<= count; i++) {
//             nums.push_back(0);
//         }
//         return;
//     }
        void moveZeroes(vector<int>& nums) {
//         erase index, then AFTER the for loop, apend how many zeroes were encountered to the end
        int count =0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                // nums.erase(nums.begin()+i);
                nums.erase(nums.begin()+i);
                i--;
                count++;
            }
        }
        
        for(int i=1; i<= count; i++) {
            nums.push_back(0);
        }
        return;
    }