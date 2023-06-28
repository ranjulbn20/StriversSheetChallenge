//Day 10

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
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    LinkedListNode<int> *prev=NULL,*curr=head,*next = NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    bool result = true;

    if(head == NULL || head->next == NULL)
        return true;

    LinkedListNode<int> *slow = head, *fast = head, *middle = NULL;

    while(fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }    

    middle = slow;
    middle->next = reverseLinkedList(middle->next);

    LinkedListNode<int> *ptr1 = head,*ptr2 = middle->next;
    while(ptr2!=NULL)
    {
        if(ptr1->data != ptr2->data)
        {
            result = false;
            break;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    middle->next = reverseLinkedList(middle->next);
    return result;
}