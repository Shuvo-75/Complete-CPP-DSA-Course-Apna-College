#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<int> arr(x);
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for(int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}