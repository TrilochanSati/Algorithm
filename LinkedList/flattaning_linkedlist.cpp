#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;


class Node
{
    public:
    int value;
    Node* next=nullptr;
    Node* nextList=nullptr;

    Node(int x)
    {
        value=x;

    }
};

void insertNode(Node* &head,int x)
{
    Node* ins= new Node(x);

    if(head==nullptr)
    {
        head=ins;
        return;

        cout<<" hiii";
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
    while(temp!=nullptr){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}

void merge(Node* &head, Node* &curList)
{
    Node* list1=head;
    Node* list2=curList;
    Node* mergeList=nullptr;


    while(list1!=nullptr && list2!=nullptr)
    {
        if(list1->value>=list2->value)
        {
            insertNode(mergeList,list2->value);
            list2=list2->next;

        }
        else
        {
            insertNode(mergeList,list1->value);
            list1=list1->next;
        }

    }


        while(list1!=nullptr)
        {
            insertNode(mergeList,list1->value);
            list1=list1->next;
        }


        while(list2!=nullptr)
        {
            insertNode(mergeList,list2->value);
            list2=list2->next;
        }

        head=mergeList;



}


void flatten(Node* &head)
{

    Node* curList=head->nextList;

    while(curList!=nullptr)
    {
      
        merge(head,curList);
        curList=curList->nextList;
    }

}



int main()
{
    Node* head= nullptr;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);

    Node* list2= new Node(10);
    insertNode(list2,20);
    insertNode(list2,30);
    insertNode(list2,40);
    insertNode(list2,50);

      Node* list3= new Node(5);
    insertNode(list3,7);
    insertNode(list3,8);
    insertNode(list3,10);
    insertNode(list3,45);

    head->nextList=list2;
    list2->nextList=list3;

 

    flatten(head);

    printList(head);

}