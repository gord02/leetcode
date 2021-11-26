#include <iostream>
#include <string>
using namespace std;

//     1. Two Sum
//     Time taken: 8-9 minutes, struggled with another apporach I was trying to make work, took 21 minutes, eventually switched over to this
//     Runtime: 29 ms, faster than 41.00% Memory Usage: 12.5 MB, less than 5.59%
     vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> dict;
            for(int i=0; i<nums.size(); i++) {
                dict.insert(pair<int, int> (nums[i], i));
            }
        for(int i=0; i<nums.size(); i++) {
            auto it = dict.find(target - nums[i]);
            if(it != dict.end() && it->second != i) {
                nums.clear();
                nums.push_back(i);
                nums.push_back(it->second);
                return nums;
            }
        }
                return nums;

    }
vector<int> twoSum(vector<int>& nums, int target) {
  for(int i=0;i<nums.size();i++){
    for(int j=0;j<nums.size();i=j++){
      if(nums[i]+nums[j]==target && i!=j){
        nums.clear();
        nums.push_back(i);
        nums.push_back(j);
        break;
      }
    }
  }
    return nums;
}