#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a = 2;
    vector<int> arr(2);

    for(int i = 0; i < 2; i++)
    {
        cin >> arr[i];
    }

    long long x = 0; 
    for(int val : arr)
    {
        x = x * 10 + val;

    }
    cout << pow(a, x);
    return 0;
}