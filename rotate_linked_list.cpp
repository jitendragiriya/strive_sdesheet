#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h>
/********************************

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

********************************/

Node *rotate(Node *head, int k)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    // get linked list length
    int len = 1;
    while (temp->next && ++len)
    {
        temp = temp->next;
    }

    // point last node ->next to head;
    temp->next = head;

    // compute k
    k = k % len;
    k = len - k;

    while (k--)
    {
        temp = temp->next;
    }

    head = temp->next;
    temp->next = NULL;

    return head;
} // codestudio code

int main()
{
    
    return 0;
}