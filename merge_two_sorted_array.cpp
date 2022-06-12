#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

// codestudio code
vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    int i = m;
    for (auto j : arr2)
    {
        arr1[i++] = j;
    }

    int gap = ceil((float)(n + m) / 2);

    while (gap > 0)
    {
        int i = 0;
        int j = gap;

        while (j < (m + n))
        {
            if (arr1[i] > arr1[j])
            {
                swap(arr1[i], arr1[j]);
            }
            i++;
            j++;
        }

        if (gap == 1)
        {
            gap = 0;
        }
        else
        {
            gap = ceil((float)gap / 2);
        }
    }
    return arr1;
} // codestudio code

int main()
{

    return 0;
}