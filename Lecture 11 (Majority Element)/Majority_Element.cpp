#include <bits/stdc++.h>
using namespace std;
// brute force approach where compelxity O(n^2)
/*
    int majorityElement(vector<int> nums)
    {
        int n = nums.size();

        int target = n / 2; 

        for (int val : nums)
        {
            int freq = 0;
            for (int ele : nums)
            {
                if (ele == val)
                {
                    freq++;
                }
            }
            if (freq > target)
            {
                return val;
            }
        }
        return -1;
    }
*/

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int target = n / 2; 
    sort(nums.begin(), nums.end());

    int ans = nums[0];
    int freq = 1; 

    for(int i = 1; i < n; i++)
    {
        if(nums[i] == nums[i-1])
        {
            freq++;

        }else
        {
            freq = 1;
            ans = nums[i];
        }
        if(freq > target)
        {
            return ans;
        }

    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int result = majorityElement(nums);

    cout << result << endl;
    return 0;
}
