#include <iostream>
#include <vector>
#include <unistd.h>
#include "LinkedList.cpp"

using namespace std;

void deleteNode(Node* del)
{
    del->data=del->next->data;
    del->next=del->next->next;


}


int main(){

LinkedList list;
list.insertAtBeginning(100);
list.insertAtBeginning(200);
Node* del=list.insertAtBeginning(300);
list.insertAtBeginning(400);
Node * del2=list.insertAtBeginning(500);

deleteNode(del);
deleteNode(del2);

list.printList();
}