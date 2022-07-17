#include<iostream>
using namespace std;

//codestudio code
#include <vector>
long f(int n, int value, int *a, vector<vector<long>> &dp)
{
    if (n == 0)
    {
        return (value % a[0] == 0);
    }

    if (dp[n][value] != 0)
    {
        return dp[n][value];
    }

    long noTake = f(n - 1, value, a, dp);
    long take = 0;
    if (a[n] <= value)
    {
        take = f(n, value - a[n], a, dp);
    }

    return dp[n][value] = noTake + take;
}

long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>> dp(n, vector<long>(value + 1, 0));
    return f(n - 1, value, denominations, dp);
} // codestudio code

int main()
{
    
    return 0;
}