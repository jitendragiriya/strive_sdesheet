#include<iostream>
using namespace std;

//codestudio code
#include <stack>
class Queue
{
    stack<int> s;

public:
    Queue()
    {
    }

    void enQueue(int val)
    {
        stack<int> temp;
        while (!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }

        s.push(val);
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
    }

    int deQueue()
    {
        // is empty
        if (s.empty())
            return -1;

        int ans = s.top();
        s.pop();
        return ans;
    }

    int peek()
    {
        // is empty
        if (s.empty())
            return -1;

        int ans = s.top();
        return ans;
    }

    bool isEmpty()
    {
        if (s.empty())
            return true;
        return false;
    }
}; // codestudio code

int main()
{
    
    return 0;
}