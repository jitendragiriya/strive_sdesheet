#include<iostream>
using namespace std;

//codestudio code
#include <stack>

bool isValidParenthesis(string expression)
{
    stack<char> s;                 // implementing the stack
    int len = expression.length(); // getting lenght of the stack

    for (int i = 0; i < len; i++)
    { // visiting the all the characters in a string
        // checking for the conditions
        if (expression[i] == '[' || expression[i] == '{' || expression[i] == '(')
            s.push(expression[i]);
        else
        {
            if (s.empty())
                return false;

            if ((expression[i] == ']' && s.top() == '[') || (expression[i] == '}' && s.top() == '{') || (expression[i] == ')' && s.top() == '('))
                s.pop();
            else
                return false;
        }
    }
    if (s.empty())
        return true;
    return false;
} // codestudio code

int main()
{
    
    return 0;
}