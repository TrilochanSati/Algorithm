#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int x)
    {
        value=x;
        next=nullptr;
    }
};


void insertNode( Node* head, int x)
{
    Node* ins= new Node(x);
    Node* runner=head;
    if(head==nullptr)
    {
        head=ins;
        return;
    }
    while(runner->next!=nullptr)
    {
        runner=runner->next;
    }
    runner->next=ins;

}

void printList(Node* head)
{
    Node* runner=head;
    while(runner!=nullptr)
    {
        cout<<runner->value<<" ";
        runner=runner->next;
    }
}

void createCycle(Node* &head,int a, int b)
{
    int cnta=0,cntb=0;
    Node* p1=head;
    Node* p2=head;
    while(cnta!=a || cntb!=b )
    {
        if(cnta!=a) p1=p1->next,++cnta;
        if(cnta!=b) p2=p2->next,++cntb;
    }
    p2->next=p1;
}

Node* startingNodeOfCycle(Node* head)
{
    if(head==nullptr|| head->next==nullptr ) return nullptr;

    Node* slow=head;
    Node* fast=head;
    Node* ini=head;

    while(fast!=nullptr || fast->next->next!=nullptr)
    {
           fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){
            while(slow!=ini)
            {
                slow=slow->next;
                ini=ini->next;

            }
            return ini;
        }
     
    }

    return nullptr;

}

int main()
{
    Node* head= new Node(1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    insertNode(head,7);
    insertNode(head,8);

    createCycle(head,5,7);

    cout<<startingNodeOfCycle(head)->value;
}