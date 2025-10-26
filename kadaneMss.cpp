#include <iostream>
#include <vector>

using namespace std;

int maxSubArraySum(vector<int>& nums)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 3, -1, 5, -3, 1, -2};
    // vector<int> nums = {-2, -3, -1, -4};
    cout << maxSubArraySum(nums);
}