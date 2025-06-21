#include<bits/stdc++.h>

using namespace std;

void max_min_swap(int arr[], int x)
{
    if(x <= 1) return;
    
    int max = INT_MIN;
    int min = INT_MAX;
    int min_index, max_index;
    for(int i = 0; i < x; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
        if(arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    swap(arr[max_index], arr[min_index]);
    
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

    max_min_swap(arr, x);

    for(int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl; 
    return 0;
}