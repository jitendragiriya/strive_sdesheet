#include<iostream>
using namespace std;

//codestudio code
int maximumProduct(vector<int> &arr, int n)
{
    int maxi = INT_MIN;
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= arr[i];
        maxi = max(prod, maxi);
        if (prod == 0)
        {
            prod = 1;
        }
    }
    prod = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        prod *= arr[i];
        maxi = max(prod, maxi);
        if (prod == 0)
        {
            prod = 1;
        }
    }

    return maxi;
}
// codestudio code

int main()
{
    
    return 0;
}