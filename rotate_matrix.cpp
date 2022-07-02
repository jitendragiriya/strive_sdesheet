#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>

void rotateHelper(vector<vector<int>> &mat, int n, int m)
{
    int row = 0, col = 0;
    int lastRow = n, lastCol = m;
    int prev, curr;

    while (row < lastRow && col < lastCol)
    {
        if (row + 1 == lastRow || col + 1 == lastCol)
        {
            break;
        }

        prev = mat[row + 1][col];
        // round 1: rotate top row
        for (int i = col; i < lastCol; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }

        row++;
        // round 2: rotate last col
        for (int i = row; i < lastRow; i++)
        {
            curr = mat[i][lastCol - 1];
            mat[i][lastCol - 1] = prev;
            prev = curr;
        }

        lastCol--;
        // round 3: rotate bottom row
        if (row < lastRow)
        {
            for (int i = lastCol - 1; i >= col; i--)
            {
                curr = mat[lastRow - 1][i];
                mat[lastRow - 1][i] = prev;
                prev = curr;
            }
        }

        lastRow--;
        // round 4: rotate first column
        if (col < lastCol)
        {
            for (int i = lastRow - 1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }

        col++;
    }
}

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    rotateHelper(mat, n, m);
} // codestudio code

int main()
{
    
    return 0;
}