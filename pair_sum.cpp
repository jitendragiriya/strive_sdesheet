#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

//codestudio code
vector<vector<int>> pairSum(vector<int> &arr, int s)
{

    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
} // codestudio code

int main()
{
    
    return 0;
}