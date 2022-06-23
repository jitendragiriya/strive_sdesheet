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

int findIntersection(Node *firstHead, Node *secondHead)
{
    if (firstHead == NULL || secondHead == NULL)
    {
        return -1;
    }

    Node *n1 = firstHead;
    Node *n2 = secondHead;
    int round = 0;

    while (n1 != n2)
    {
        if (round == 2)
        {
            return -1;
        }
        if (n1->next == NULL)
        {
            n1 = secondHead;
            round++;
        }
        else
        {
            n1 = n1->next;
        }
        n2 = n2->next == NULL ? firstHead : n2->next;
    }
    return n1->data;
} // codestudio code

int main()
{
    
    return 0;
}