#include <iostream>
#include <vector>
#include <unistd.h>
#include "LinkedList.cpp"

using namespace std;


Node * find_intersection(Node* head1,Node* head2)
{

  Node* d1 = head1;
    Node* d2 = head2;
    
    while(d1 != d2) {
        d1 = d1 == NULL? head2:d1->next;
        d2 = d2 == NULL? head1:d2->next;
    }
    
    return d1;
}



int main(){

LinkedList list1;

Node* x=list1.insertAtBeginning(2);
list1.insertAtBeginning(1);
list1.insertAtBeginning(3);
list1.insertAtBeginning(1);
list1.insertAtEnd(4);

LinkedList list2;
Node* y= list2.insertAtBeginning(3);

y->next=x;

cout<<(list1.head)->data;




}