#include <iostream>
using namespace std;

// codestudio code
#include <bits/stdc++.h>
// ****************************************************************

// Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// *****************************************************************

bool detectCycle(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL)
    {
        if (slow == fast)
        {
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
} // codestudio code

int main()
{

    return 0;
}