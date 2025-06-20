#include<bits/stdc++.h>

using namespace std;

int product(int arr[], int x)
{
    int product = 1; 
    for(int i = 0; i < x; i++)
    {
        product *= arr[i];
    }
    return product; 
}

int sum(int arr[], int x)
{
    int sum = 0; 
    for(int i = 0; i < x; i++)
    {
        sum += arr[i];
    }
    return sum; 
}
int main()
{
    int x;
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    cout << "sum : " << sum(arr, x) << endl;
    cout << "product : " << product(arr, x) << endl; 
    return 0;
}