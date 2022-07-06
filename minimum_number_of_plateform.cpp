#include<iostream>
using namespace std;

//codestudio code
int calculateMinPatforms(int at[], int dt[], int n)
{
    sort(at, at + n); // sort arrival time
    sort(dt, dt + n); // sort departure time

    int plat_needed = 1, result = 1;
    int i = 1, j = 0;

    while (i < n && j < n)
    {
        if (at[i] <= dt[j])
        {
            plat_needed++;
            i++;
        }
        else if (at[i] > dt[j])
        {
            plat_needed--;
            j++;
        }

        if (plat_needed > result)
        {
            result = plat_needed;
        }
    }
    return result;
} // codestudio code

int main()
{
    
    return 0;
}