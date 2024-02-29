#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp


class Node{
    public:
    int value;
    Node * next=NULL;
    Node(int x){
        value=x;
    }
};


Node* reverse(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;

    }

    Node* r_head=reverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return r_head;


}

Node* returnMid(Node* head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

void insertNode(Node* head,    int x)
{
    if(head==NULL)
    {
        head= new Node(x);
        return;
    }
    Node* temp=head;

    

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new Node(x);

}

void printList(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" , ";
        temp=temp->next;
    }
}

bool checkPalindrome(Node* head)
{
    if(head==NULL)
    {
        return false;
    }

    Node* mid= returnMid(head);
    Node* start=head;
    mid=reverse(mid);

    while(mid!=NULL)
    {
        if(start->value!=mid->value)
        {
            return false;
        }
        start=start->next;
        mid=mid->next;
    }
    return true;


}


int main()
{
    Node* head=new Node(9);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,4);
    insertNode(head,3);
    insertNode(head,2);
    insertNode(head,9);

    printList(head);
    cout<<endl;

    cout<<checkPalindrome(head);

return 0;
}