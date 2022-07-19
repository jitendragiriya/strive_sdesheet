#include<iostream>
using namespace std;

//codestudio code
#include<vector>
int getLcs(int n,int m, string s, string t, vector<vector<int>>& dp){
    if(n == 0 || m == 0){
        return 0;
    }
    
    if(dp[n][m] != -1){
        return dp[n][m];
    }
    if(s[n - 1] == t[m - 1]){
        return dp[n][m] = 1 + getLcs(n - 1, m - 1, s, t, dp);
    }
    
    return dp[n][m] = max(getLcs(n - 1, m, s, t, dp), getLcs(n, m - 1, s, t, dp));
}

int lcs(string s, string t)
{
	//Write your code here
    int n = s.length();
    int m = t.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1 ,-1));
    return getLcs(n, m , s, t, dp);
}//codestudio code

int main()
{
    
    return 0;
}