#include<iostream>
using namespace std;

//codestudio code
#include <stack>
string reverseString(string str)
{
    stack<string> st;
    // push all the word in stack
    for (int i = 0; i < str.length(); i++)
    {
        string word = "";
        while (i < str.length() && str[i] != ' ')
        {
            word += str[i++];
        }
        if (word.length())
            st.push(word);
    }

    // store all stack words in a string
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        ans += ' ';
        st.pop();
    }
    return ans;
} // codestudio code

int main()
{
    
    return 0;
}