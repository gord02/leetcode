#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
    vector<int> left;
    if(nums.size() == 2){
        return 1;
    }
//         best option is to siwtch and start from back instead of front

//     int left_ind = nums.size()-1;
//     int min_left=nums.size() -1;
// //  travels from last index in vector as far as it can while the left_index value is larger than everything before it
//     while(left_ind >= 0) {
//         cout << "this is left index(outside): " << left_ind << endl;
// //      for loop to compare all previous values infront of left index to see if they are smaller
//         for(int i=left_ind-1; i>=0; i--) {
// //          if current element is not smaller than left index value, update left index value to it
//             if(nums[i] >= nums[left_ind]) {
//                 if(nums[i] > nums[min_left]) {
//                     left_ind = i;
//                     min_left = left_ind;
//                     cout << "this is left index: " << left_ind << endl;
//                     left_ind++;   
//                     break;
//                 }
//             }
//         }
//         left_ind--;
//     }
    int definite_left = nums.size() -1;
    int min_left=nums.size() -1;
     for(int i=nums.size()-2; i>=0; i--) {
         // current_left = nums.size() -1;
//          if current element is not smaller than left index value, update left index value to it
            // if(nums[i] >= nums[left_ind]) {
            //     if(nums[i] > nums[min_left]) {
            //         left_ind = i;
            //         min_left = left_ind;
            //         cout << "this is left index: " << left_ind << endl;
            //         left_ind++;   
            //         break;
            //     }
            // }
            if(nums[i] > nums[min_left]) {
                min_left = i;
            }
    }
        
    cout << "this is min_left index: " << min_left << endl;
    
        for(int z=0;z<min_left; z++) {
            left.push_back(z);
        }
    return(left.size());
    }
};
int main() {
    return 0;
}