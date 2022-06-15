#include <iostream>
using namespace std;

// codestudio code
#include <queue>

class Stack
{
    queue<int> q;

public:
    Stack()
    {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {
        return q.size();
    }

    bool isEmpty()
    {
        if (q.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int element)
    {
        queue<int> q1;

        while (!q.empty())
        {
            q1.push(q.front());
            q.pop();
        }

        q.push(element);
        while (!q1.empty())
        {
            q.push(q1.front());
            q1.pop();
        }
    }

    int pop()
    {
        if (q.empty())
            return -1;

        int ans = q.front();
        q.pop();
        return ans;
    }

    int top()
    {
        if (q.empty())
            return -1;

        return q.front();
    }
}; // codestudio code

int main()
{

    return 0;
}