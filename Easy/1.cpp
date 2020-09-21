#include <iostream>
#include <string>
using namespace std;

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