#include<iostream>
using namespace std;

//codestudio code
int editDistance(string str1, string str2)
{
    // write you code here
    int m = str1.length();
    int n = str2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }

    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = j;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (str1.at(i - 1) == str2.at(j - 1))
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                int d = min(dp[i][j - 1], dp[i - 1][j - 1]);
                dp[i][j] = 1 + min(d, dp[i - 1][j]);
            }
        }
    }
    return dp[m][n];
} // codestudio code

int main()
{
    
    return 0;
}