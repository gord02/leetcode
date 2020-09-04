#include <iostream>
#include <vector>
using namespace std;

// could work on improving space complexity

vector<int> shuffle(vector<int> &nums, int n)
{
    //         starting for index 2/n
    //         for each element left in the array starting after 2/n index,
    int j = 0;
    vector<int> newVector;
    for (int i = n; i < nums.size(); i++)
    {
        newVector.push_back(nums[j]);
        newVector.push_back(nums[i]);
        j++;
    }
    return newVector;
}

vector<int> shuffle(vector<int> &nums, int n)
{
    int j = 0;
    // vector<int> newVector;
    nums.clear();

    for (int i = n; i < nums.size(); i++)
    {
        // newVector.push_back(nums[j]);
        // newVector.push_back(nums[i]);
        j++;
    }
    return nums;
}