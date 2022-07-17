#include<iostream>
using namespace std;

//codestudio code
int f(int n, int m, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (n == 0 && m == 0)
    {
        return grid[n][m];
    }

    if (n < 0 || m < 0)
    {
        return 1e9;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    int up = grid[n][m] + f(n - 1, m, grid, dp);
    int left = grid[n][m] + f(n, m - 1, grid, dp);

    return dp[n][m] = min(up, left);
}

int minSumPath(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> dp(n, vector<int>(m, -1));
    return f(n - 1, m - 1, grid, dp);
} // codestudio code

int main()
{
    
    return 0;
}