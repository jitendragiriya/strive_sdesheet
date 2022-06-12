#include<iostream>
using namespace std;

// codestudio code
//  Stack class.
class Stack
{
    int *arr;
    int size;
    int ttp;

public:
    Stack(int capacity)
    {
        this->size = capacity;
        this->arr = new int[size];
        ttp = -1;
    }

    void push(int num)
    {
        if (ttp != size)
        {
            ttp++;
            arr[ttp] = num;
        }
    }

    int pop()
    {
        if (ttp != -1)
        {
            int ans = arr[ttp];
            ttp--;
            return ans;
        }
    }

    int top()
    {
        if (ttp != -1)
        {
            return arr[ttp];
        }
        return -1;
    }

    int isEmpty()
    {
        if (ttp == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isFull()
    {
        if (ttp == size)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}; // codestudio code

int main()
{
    
    return 0;
}