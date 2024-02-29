#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp


class Node
{
    public:
        int value;
        Node* next=nullptr;

        Node(int x)
        {
            value=x;
        }
};


int linkedListLenth(Node* &head)
{
    Node* temp=head;

   

    if(temp==nullptr){
        return 0;
    }
     int count=0;
    while(temp!=nullptr )
    {
        count+=1;
        temp=temp->next;
        
    }

    return count;
}


Node* rotateLinkedList(Node* &head,int k)
{
    if(head==nullptr)
    {
        return head;
    }

    Node* temp=head;
    Node* pre=nullptr;

    int len=linkedListLenth(head);

    for(int  i=0;i<k%len;i++)
    {
        while(temp->next!=nullptr)
        {
            pre=temp;
            temp=temp->next;

        }

        temp->next=head;
        head=temp;
        pre->next=nullptr;
    }

    return head;
}


void insertNode(Node* &head,int x)
{
    Node* ins= new Node(x);

    if(head==nullptr)
    {
        head=ins;
        return;
    }
    Node* temp=head;

    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }

    temp->next=ins;
}

void printList(Node* &head)
{

    Node* temp=head;

    while(temp!=nullptr)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node* head=new Node(1);

    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,5);
    insertNode(head,5);
    insertNode(head,5);

   Node* ans= rotateLinkedList(head,11);

  printList(ans);

 cout<<  linkedListLenth(head);

}