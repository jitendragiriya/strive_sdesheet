#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/

bool detectCycle(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }

    Node *slow = head;
    int min = INT_MIN;

    while (slow != NULL)
    {
        if (slow->data == min)
        {
            return true;
        }
        slow->data = min;
        slow = slow->next;
    }
    return false;
} // codestudio code

int main()
{
    
    return 0;
}