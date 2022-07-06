#include<iostream>
using namespace std;

//codestudio code
bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    // duplicate row and col value
    int duprow = row;
    int dupcol = col;

    // check left top most elements
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // check in left side elements
    row = duprow;
    col = dupcol;
    while (col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        col--;
    }

    // check in left bottom elements
    row = duprow;
    col = dupcol;
    while (row < n && col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row++;
        col--;
    }

    return true;
}

void solve(int col, vector<vector<int>> &board, vector<vector<int>> &ans, int n)
{
    // base case
    if (col == n)
    {
        vector<int> tempAns;
        for (auto i : board)
        {
            for (auto j : i)
            {
                tempAns.push_back(j);
            }
        }
        ans.push_back(tempAns);
        return;
    }

    // for all rows combination
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 1;
            // recursive cal
            solve(col + 1, board, ans, n);
            // back track
            board[row][col] = 0;
        }
    }
}
vector<vector<int>> solveNQueens(int n)
{
    vector<vector<int>> ans;
    vector<vector<int>> board(n, vector<int>(n, 0));

    int col = 0;
    solve(col, board, ans, n);
    return ans;
} // codestudio code

int main()
{
    
    return 0;
}