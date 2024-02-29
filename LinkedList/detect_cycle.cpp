#include <iostream>
#include <vector>
#include <unistd.h>
#include <unordered_set>

using namespace std;


class Node{
    public:
        int num;
        Node* next;
        Node(int val)
        {
            num=val;
            next=NULL;
        }
};

void insertNode(Node* &head,int val)
{
    Node* newNode=new Node(val);

    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;

    return;

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

bool detectCycle(Node* &head){
    if(head==NULL) return false;
    Node* show=head;
    Node* fast=head;

    while(show->next==NULL && fast->next->next==NULL)
    {
        fast=fast->next->next;
                show=show->next;

        if(fast==show){
            return true;
        }
    }
return false;
}

int main()
{
    Node* head=NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    createCycle(head,1,3);
    cout<<detectCycle(head);
}