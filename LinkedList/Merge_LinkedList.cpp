#include <iostream>
#include <vector>
#include <unistd.h>
#include "LinkedList.cpp"

using namespace std;


/* class ChildLinkedList : public LinkedList
{

    public :
 

} */

       LinkedList MergerLinkedList(LinkedList l1, LinkedList l2)
        {
            LinkedList ans;
            Node* l=l1.head;
            Node* r=l2.head;


            while(l && r){

                if(l->data <= r->data)
                {
                    ans.insertAtEnd(l->data);
                    l=l->next;

                }
                else{
                    ans.insertAtEnd(r->data);
                    r=r->next;
                }

            }

            while(l)
            {
                ans.insertAtEnd(l->data);
                l=l->next;
            }
            while(r){
                ans.insertAtEnd(r->data);
                r=r->next;

            }
            return ans;
        }

int main()
{

        LinkedList l1;
        l1.insertAtEnd(3);
        l1.insertAtEnd(7);
        l1.insertAtEnd(10);
        l1.insertAtEnd(11);
        l1.insertAtEnd(12);

        LinkedList l2;
        l2.insertAtEnd(1);
        l2.insertAtEnd(2);
        l2.insertAtEnd(4);
        l2.insertAtEnd(5);
        l2.insertAtEnd(8);
        l2.insertAtEnd(10);

        LinkedList merged= MergerLinkedList(l1,l2);
        merged.printList();



}