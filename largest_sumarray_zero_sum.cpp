#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
int LongestSubsetWithZeroSum(vector<int> arr)
{
    unordered_map<int, int> mpp;
    int maxi = 0, sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }
    return maxi;
} // codestudio code

int main()
{
    
    return 0;
}