//Day 3

#include <bits/stdc++.h>

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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head == NULL || head->next == NULL)
        return head;
    
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *current = head;
    LinkedListNode<int> *nextNode = NULL;
    while(current->next != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    current->next = prev;
    head = current;
    return head;
}