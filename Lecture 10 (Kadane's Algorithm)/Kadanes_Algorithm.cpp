// maximum subarray sum using Kadane's Algorithm (Most Optimized)

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

    int maxSum = INT_MIN;
    int currentSum = 0; 
    for(int val : arr)
    {
        currentSum += val; 
        maxSum = max(currentSum, maxSum);

        if(currentSum < 0)
        {
            currentSum = 0; 
        }
    }
    
    cout << "maximum subarray sum : " << maxSum << " (using Kadane's Algorithm)" << endl; 
    return 0;
}