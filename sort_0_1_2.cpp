#include <iostream>
using namespace std;

// code studio code
void sort012(int *arr, int n)
{
    int left = 0, mid = 0, right = n - 1;

    while (mid <= right)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[mid++], arr[left++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[right--]);
            break;
        }
    }
} // code studio code

int main()
{

    return 0;
}