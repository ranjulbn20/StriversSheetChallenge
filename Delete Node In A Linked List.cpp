//Day 5

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

void deleteNode(LinkedListNode<int> * node) {
    if(node == NULL || node->next == NULL) {
        node = NULL;
        return;
    }

    node->data = node->next->data;
    LinkedListNode<int>* temp = node->next;
    node->next = temp->next;

    delete temp; 
}