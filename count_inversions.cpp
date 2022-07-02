#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
long long merge(long long *arr, long long *temp, int left, int mid, int right)
{
    int i, j, k;
    long long count = 0;

    i = left;
    j = mid;
    k = left;

    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            count = count + (mid - i);
        }
    }

    while (i <= mid - 1)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
    return count;
}

long long mergeSort(long long *arr, long long *temp, int left, int right)
{
    int mid;
    long long inv_count = 0;
    if (left < right)
    {
        mid = left + (right - left) / 2;

        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

long long getInversions(long long *arr, int n)
{
    long long temp[n];
    long long ans = mergeSort(arr, temp, 0, n - 1);
} // codestudio code

int main()
{
    
    return 0;
}