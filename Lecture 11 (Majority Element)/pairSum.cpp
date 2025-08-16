#include <bits/stdc++.h>
using namespace std;
// brute force method where complexity O(n^2)
/* 
    vector<int> pairSum(vector<int> nums, int target)
    {
        vector<int> ans;
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            for(int j = i; j < size; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
*/

// two pointer technique where complexity O(n)
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int size = nums.size();
    int i = 0, j = size - 1;
    while (i < j)
    {
        if(nums[i] + nums[j] == target)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
        if(nums[i] + nums[j] > target)
        {
            j--;
        }else
        {
            i++;
        }
    }
    return ans;
    
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13; 
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    
    return 0;
}