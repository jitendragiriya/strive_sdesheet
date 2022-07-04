#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>

// int pathHelper(int i, int j, int m, int n){
//     if(i == (n - 1) && j == (m - 1)){
//         return 1;
//     }
//     if(i >= n || j >= m){
//         return 0;
//     }else{
//         return pathHelper(i + 1, j, m, n) + pathHelper(i, j + 1, m, n);
//     }
// }

int uniquePaths(int m, int n)
{
    // 1st solution
    //     int i = 0;
    //     int j = 0;
    // 	return pathHelper(i, j, m, n);
    int N = m + n - 2;
    int r = m - 1;
    int res = 1;

    for (int i = 1; i <= r; i++)
    {
        res = res * (N - r + i) / i;
    }
    return int(res);
} // codestudio code

int main()
{
    
    return 0;
}