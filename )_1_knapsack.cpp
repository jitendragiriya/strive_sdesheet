#include<iostream>
using namespace std;

//codestudio code
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
    // Write your code here
    vector<vector<int>> mat(n + 1, vector<int>(w + 1));
    for (int r = 0; r < w + 1; r++)
    {
        mat[0][r] = 0;
    }
    for (int c = 0; c < n + 1; c++)
    {
        mat[c][0] = 0;
    }

    for (int item = 1; item <= n; item++)
    {
        for (int capacity = 1; capacity <= w; capacity++)
        {
            int maxValWithoutCurr = mat[item - 1][capacity]; // This is guaranteed to exist
            int maxValWithCurr = 0;                          // We initialize this value to 0

            int weightOfCurr = weights[item - 1]; // We use item -1 to account for the extra row at the top
            if (capacity >= weightOfCurr)
            {                                      // We check if the knapsack can fit the current item
                maxValWithCurr = values[item - 1]; // If so, maxValWithCurr is at least the value of the current item

                int remainingCapacity = capacity - weightOfCurr;    // remainingCapacity must be at least 0
                maxValWithCurr += mat[item - 1][remainingCapacity]; // Add the maximum value obtainable with the remaining capacity
            }

            mat[item][capacity] = max(maxValWithoutCurr, maxValWithCurr); // Pick the larger of the two
        }
    }
    return mat[n][w];
} // codestudio code

int main()
{
    
    return 0;
}