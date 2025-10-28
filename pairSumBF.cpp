#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int>& vec, int targetSum)
{
    vector<int> ans;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i+1;j<vec.size();j++)
        {
            if(vec[i] + vec[j] == targetSum)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main()
{
    vector<int> ans, vec = {2, 4, 7, 10, 12};
    int targetSum = 11;

    ans = pairSum(vec, targetSum);

    for(int ele : ans)
        cout << ele << endl;
}
