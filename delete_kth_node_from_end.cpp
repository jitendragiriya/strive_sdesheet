#include <iostream>
using namespace std;

// codestudio code
#include <bits/stdc++.h>
// ****************************************************************

// Following is the class structure of the LinkedListNode class :

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// *****************************************************************

LinkedListNode<int> *removeKthNode(LinkedListNode<int> *head, int K)
{
    // base case
    if (head == NULL || K == 0)
    {
        return head;
    }
    LinkedListNode<int> *dump = new LinkedListNode<int>(1);
    dump->next = head;

    LinkedListNode<int> *slow = dump;
    LinkedListNode<int> *fast = dump;

    for (int i = 1; i <= K; ++i)
    {
        fast = fast->next;
    }

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;
    head = dump->next;
    return head;
} // codestudio code

int main()
{

    return 0;
}