// Day 4

#include <cmath>
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    if(head == NULL || head->next == NULL)
        return head;

    Node* current = head;
    double count = 1.0;
    while(current != NULL) {
        count++;
        current = current->next;
    }

    int middle = ceil(count/2.0);

    current = head;
    for(int i = 1; i < middle; i++) {
        current = current->next;
    }

    return current;
}

