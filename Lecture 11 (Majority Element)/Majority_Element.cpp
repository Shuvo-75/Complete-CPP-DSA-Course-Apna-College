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

// optimize solution where complexity O(nlogn)
/* int majorityElement(vector<int> &nums)
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
} */

// moore's voting algorithm 
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int target = n / 2; 
    int freq = 0, ans = 0; 
    for(int i = 0; i < n; i++)
    {
        if(freq == 0)
        {
            ans = nums[i];
        }
        if(ans == nums[i])
        {
            freq++;
        }else
        {
            freq--;
        }
    }
    int count = 0; 
    for(int val : nums)
    {
        if(val == ans)
        {
            count++;
        }
    }

    if(count > target)
    {
        return ans;
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
