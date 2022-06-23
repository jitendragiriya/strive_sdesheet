#include<iostream>
using namespace std;

//codestudio code
/****************************************************************

    Following is the class structure of the LinkedListNode class:

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

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head)
{
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    LinkedListNode<int> *prev = NULL;
    fast = slow;
    while (slow != NULL)
    {
        fast = slow->next;
        slow->next = prev;
        prev = slow;
        slow = fast;
    }
    slow = head;
    while (prev != NULL && slow != NULL)
    {
        if (prev->data != slow->data)
            return false;
        slow = slow->next;
        prev = prev->next;
    }
    return true;
} // codestudio code

int main()
{
    
    return 0;
}