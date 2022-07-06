#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
int subarraysXor(vector<int> &arr, int x)
{
    map<int, int> mp;
    int count = 0;
    int xxor = 0;

    for (auto it : arr)
    {
        xxor = xxor ^ it;

        if (xxor == x)
        {
            count++;
        }

        if (mp.find(xxor ^ x) != mp.end())
        {
            count += mp[xxor ^ x];
        }

        mp[xxor] += 1;
    }
    return count;
} // codestudio code

int main()
{
    
    return 0;
}