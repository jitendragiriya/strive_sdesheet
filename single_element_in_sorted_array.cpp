#include<iostream>
#include<vector>
using namespace std;

//codestudio code
int uniqueElement(vector<int> arr, int n)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

// codestudio code

int main()
{
    
    return 0;
}