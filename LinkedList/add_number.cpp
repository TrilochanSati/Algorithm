#include <iostream>
#include <vector>
#include <unistd.h>
#include "LinkedList.cpp"

using namespace std;



int addListAsNumber(Node* l1,Node* l2)
{
    int num1=0;
    int num2=0;

    while(l1!=NULL || l2 != NULL)

    {

       if(l1!=NULL)
       {
        num1=num1*10+l1->data;

        l1=l1->next;
       }

        if(l2!=NULL)
       {
        num2=num2*10+l2->data;

        l2=l2->next;
       }

    }
    return num1+num2;
}



int main(){

LinkedList list;
list.insertAtBeginning(10);
list.insertAtBeginning(2);
list.insertAtBeginning(3);


LinkedList list2;
list2.insertAtBeginning(1);
list2.insertAtBeginning(2);
list2.insertAtBeginning(3);
list2.insertAtBeginning(4);
list2.insertAtBeginning(5);

cout<<addListAsNumber(list.head,list2.head);

}