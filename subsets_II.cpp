#include<iostream>
using namespace std;

//codestudio code
#include <algorithm>
void solve(int idx, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans)
{
    ans.push_back(temp);
    for (int i = idx; i < nums.size(); i++)
    {
        if (i != idx && nums[i] == nums[i - 1])
        {
            continue;
        }
        temp.push_back(nums[i]);
        solve(i + 1, nums, temp, ans);
        temp.pop_back();
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> temp;
    sort(arr.begin(), arr.end());
    solve(0, arr, temp, ans);
    return ans;
} // codestudio code

int main()
{
    
    return 0;
}