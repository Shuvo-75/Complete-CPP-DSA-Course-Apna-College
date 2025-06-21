// pass by refference
#include<bits/stdc++.h>

using namespace std;

void changeArr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        arr[i] = 2 * arr[i];
    }

    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3};
    changeArr(arr, 3);
    cout << "in main\n"; 
    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}