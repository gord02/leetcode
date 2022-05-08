class Solution {
public:
//     void moveZeroes(vector<int>& nums) {
// //         Runtime: 333 ms, faster than 5.02% of C++ online submissions for Move Zeroes.
// // Memory Usage: 19.4 MB, less than 14.14% of C++ online submissions for Move Zeroes.
// //         for(int i=0; i<nums.size(); i++) {
// //             if(nums[i] == 0) {
                
// //                 int ind = i;
// //                 while(ind < nums.size()) {
// //                     if(nums[ind] != 0) {
// //                         break;
// //                     }
// //                     ind++;
// //                 }
// //                 if(ind < nums.size() && nums[ind] != 0) {
// //                     swap(nums[i], nums[ind]);
// //                 }
// //             }
// //         }
        
// //         Runtime: 110 ms, faster than 12.32% of C++ online submissions for Move Zeroes.
// // Memory Usage: 19.4 MB, less than 14.14% of C++ online submissions for Move Zeroes.
//         int count = 0;
//         for(int i=0; i<nums.size() ; i++) {
//             if(nums[i] == 0) {
//                 count++;
//                 nums.erase(nums.begin()+i);
//                 i--;
//             }
//         }
//         while(count > 0) {
//             nums.push_back(0);
//             count--;
//         }
//     }
    void moveZeroes(vector<int>& nums) {
    for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++) {
        if (nums[cur] != 0) {
            // cout << lastNonZeroFoundAt++ << endl;
            swap(nums[lastNonZeroFoundAt], nums[cur]);
            lastNonZeroFoundAt++;
            // cout << nums[cur] << endl;
        }
    }
}
};

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