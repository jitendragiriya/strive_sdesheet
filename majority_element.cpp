#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n)
{
    int count = 0;
    int candidate = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
        }
        if (candidate == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int num_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            num_count++;
        }
    }

    if (num_count > n / 2)
    {
        return candidate;
    }
    return -1;
} // codestudio code

int main()
{
    
    return 0;
}