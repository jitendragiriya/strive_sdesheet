#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> mergeInterval;
    // base case
    if (intervals.size() == 0)
    {
        return mergeInterval;
    }
    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for (auto it : intervals)
    {
        if (it[0] <= tempInterval[1])
        {
            tempInterval[1] = max(it[1], tempInterval[1]);
        }
        else
        {
            mergeInterval.push_back(tempInterval);
            tempInterval = it;
        }
    }
    mergeInterval.push_back(tempInterval);
    return mergeInterval;
}
// codestudio code

int main()
{
    
    return 0;
}