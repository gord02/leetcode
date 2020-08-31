#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    // defining new vector
    vector<int> total;
    // define total sum of the index values
    int sum = 0;
    // Added to the sum for the n umber of index value times
    for (int x : nums)
    {
        sum = sum + x;
        total.push_back(sum);
    }
    // return vector
    return total;
}

vector<int> runningSum(vector<int> &nums)
{
    //         defining new vector
    vector<int> total;
    //         define total sum of the index values
    int sum = 0;
    //         current index value
    int index = 0;
    //         Added to the sum for the n umber of index value times
    for (int i = 0; i < nums.size(); i++)
    {
        if (index == 0)
        {
            sum = nums[i];
        }
        else
        {
            sum = sum + nums[i];
        }
        // push into new vector
        total.push_back(sum);
        index++;
    }
    //         return vector
    return total;
}
