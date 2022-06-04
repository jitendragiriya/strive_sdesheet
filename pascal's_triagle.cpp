#include <iostream>
#include <vector>
using namespace std;

//code studio code
vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> ans;

    for (int i = 0; i < n; i++)
    {
        vector<long long int> temp;
        for (int j = 0; j <= i; j++)
        {
            if (j == i || j == 0)
            {
                temp.push_back(1);
            }
            else
            {
                long long int data = ans[i - 1][j - 1] + ans[i - 1][j];
                temp.push_back(data);
            }
        }
        ans.push_back(temp);
    }
    return ans;
} // code studio code

int main()
{

    return 0;
}