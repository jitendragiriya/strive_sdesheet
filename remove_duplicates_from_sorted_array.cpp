#include<iostream>
using namespace std;

//codestudio code
int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0; // pointing the first pointer
    for (int j = i + 1; j < arr.size(); j++)
    {
        if (arr[i] != arr[j])
        { // checking the condition
            i++;
            arr[i] = arr[j]; // shifting the element
        }
    }
    return i + 1;
} // codestudio code

int main()
{
    
    return 0;
}