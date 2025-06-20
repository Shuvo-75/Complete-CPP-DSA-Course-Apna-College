// reverse array
#include<bits/stdc++.h>

using namespace std;

void twoPointers(int arr[], int size)
{
    int start = 0, end = size -1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);
    twoPointers(arr, size);
    return 0;
}