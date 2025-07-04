// maximum subarray sum using Brute Force Approach

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_Sum = INT_MIN; 
    for(int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for(int end = st; end < n; end++)
        {
            currentSum += arr[end];
            max_Sum = max(currentSum, max_Sum);
        }
    }
    cout << "max subarray sum : " << max_Sum << endl; 
    return 0;
}