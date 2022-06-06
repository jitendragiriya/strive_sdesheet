#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long getMaxSum = 0;
    long long currSum = arr[0];

    int i = 0;
    while (i++ != n - 1)
    {
        currSum += arr[i];
        getMaxSum = max(getMaxSum, currSum);
        if (currSum <= 0)
        {
            currSum = 0;
        }
    }
    return getMaxSum;
} // codestudio code

int main()
{
    
    return 0;
}