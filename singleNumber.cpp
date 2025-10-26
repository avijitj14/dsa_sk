#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums)
{
    int ans = 0;
    for(int i=0;i<nums.size();i++)
        ans = ans ^ nums[i];     //Combined XOR for finding unique
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 1, 4, 2};
    cout << singleNumber(nums);
}