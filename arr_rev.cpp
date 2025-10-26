#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int>&);
void swap(int&, int&);

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    
    for(int i=0; i<vec.size();i++)
        cout << vec[i] << " ";
    cout << endl;

    reverseArray(vec);

    for(int i=0; i<vec.size();i++)
        cout << vec[i] << " ";
}

void reverseArray(vector<int>& vec)
{
    for(int i=0;i<vec.size()/2;i++)
        swap(vec[i], vec[vec.size() - 1 - i]);        
}

void swap(int& p, int& q)
{
    int t;

    t = p;
    p = q;
    q = t;
}