#include<iostream>
#include<stack>
using namespace std;

//codestudio code
void insetAtRightPos(stack<int> &stack, int val)
{
    // base case
    if (stack.empty())
    {
        stack.push(val);
        return;
    }

    // condition chack
    if (stack.top() <= val)
    {
        stack.push(val);
        return;
    }
    int num = stack.top();
    stack.pop();
    insetAtRightPos(stack, val);
    stack.push(num);
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
        return;

    int num = stack.top();
    stack.pop();

    sortStack(stack);
    insetAtRightPos(stack, num);
} // codestudio code

int main()
{
    
    return 0;
}