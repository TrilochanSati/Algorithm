#include <iostream>
#include <vector>
#include <unistd.h>
#include "LinkedList.cpp"

using namespace std;



  Node* removeNthFromEnd(Node* head, int n) {
        Node * start = new Node();
        start -> next = head;
        Node* fast = start;
        Node* slow = start;     

        for(int i = 1; i <= n; ++i)
        {
            if(fast==NULL)
             return start;
            fast = fast->next;
        }
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }





int main()
{
        LinkedList l1;
        l1.insertAtEnd(3);
        l1.insertAtEnd(7);
        l1.insertAtEnd(10);
        l1.insertAtEnd(11);
        l1.insertAtEnd(12);
        l1.insertAtEnd(13);
        l1.insertAtEnd(15);

    removeNthFromEnd(l1.head,12);

    l1.printList();

    





}