#include <iostream>

using namespace std;

int main()
{
    int n, flag = 0, arr[5];
    
    cin >> n;

    for(int i=0;i<5;i++)
        cin >> arr[i];
    
    for(int i=0;i<5;i++)
    {
        if(arr[i] == n)
        {   
            cout << i << endl;
            flag = 1;
        }
    }
    if(flag == 0)
        cout << -1;
}