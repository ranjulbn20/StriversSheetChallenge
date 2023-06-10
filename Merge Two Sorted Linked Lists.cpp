//Day 4

#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)
        return second;
    if(second == NULL)
        return first;

    Node<int>* head = new Node<int>(0);
    if(first->data < second->data){
        head->data = first->data;
        first = first->next;
    }
    else {
        head->data = second->data;
        second = second->next;
    }

    Node<int>* current = head;
    while(first != NULL && second != NULL) {
        Node<int>* temp = new Node<int>(0);
        if(first->data < second->data) {
            temp->data = first->data;
            first = first->next;
        }
        else {
            temp->data = second->data;
            second = second->next;
        }

        current->next = temp;
        current = temp;
    }

    while(first != NULL) {
        Node<int>* temp = new Node<int>(0);
        temp->data = first->data;
        first = first->next;
        current->next = temp;
        current = temp;
    }

    while(second != NULL) {
        Node<int>* temp = new Node<int>(0);
        temp->data = second->data;
        second = second->next;
        current->next = temp;
        current = temp;
    }

    return head;
}
