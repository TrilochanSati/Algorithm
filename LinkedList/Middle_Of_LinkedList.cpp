#include <iostream>
#include <vector>
#include <unistd.h>
#include "LinkedList.cpp"

using namespace std;




class ChildLinkedList : public LinkedList
{
public:
    Node* middleElementOfLinkedList()
    {
        Node* slowPtr=head;
        Node* fastPtr=head;

        while(fastPtr && fastPtr->next)
        {
            slowPtr=slowPtr->next;
            fastPtr=fastPtr->next->next;
        }
        return slowPtr;
    }

};

int main()
{

    
    ChildLinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.insertAtEnd(5);
    list.insertAtEnd(6);
    Node* mid=list.middleElementOfLinkedList();
    cout<<mid->data;


}