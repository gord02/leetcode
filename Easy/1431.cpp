#include <iostream>
#include <vector>
using namespace std;

// could possibly work on imporving space complexity, but is unlikely due to type conversion

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int maxindex = 0;
    int max = 0;
    vector<bool> newVector;
    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] >= max)
        {
            maxindex = i;
            max = candies[i];
        }
    }
    for (int j = 0; j < candies.size(); j++)
    {
        int added = candies[j] + extraCandies;
        if (added >= candies[maxindex])
        {
            newVector.push_back(true);
        }
        else
        {
            newVector.push_back(false);
        }
    }
    return newVector;
}
