#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int buyprice = prices[0];

    int i = 0;
    while (i++ != prices.size() - 1)
    {
        int profit = prices[i] - buyprice;
        buyprice = min(buyprice, prices[i]);
        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
        if (buyprice < 0)
        {
            buyprice = 0;
        }
    }
    return maxProfit;
} // codestudio code

int main()
{
    
    return 0;
}