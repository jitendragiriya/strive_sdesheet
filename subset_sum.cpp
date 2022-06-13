#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//codestudio code
void solve(int idx, int sum, int len, vector<int> &num, vector<int> &ans)
{
    if (idx == len)
    {
        ans.push_back(sum);
        return;
    }

    solve(idx + 1, sum + num[idx], len, num, ans);
    solve(idx + 1, sum, len, num, ans);
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    int len = num.size();
    solve(0, 0, len, num, ans);
    sort(ans.begin(), ans.end());
    return ans;
} // codestudio code

int main()
{
    
    return 0;
}