#include <iostream>
using namespace std;

// leetcode code
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ans = 0;
        int tempAns = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                tempAns++;
                ans = max(tempAns, ans);
            }
            else
            {
                tempAns = 0;
            }
        }
        return ans;
    }
}; // leetcode code

int main()
{

    return 0;
}