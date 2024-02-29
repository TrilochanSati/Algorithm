#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;


class Node{
public:
    int value;
    Node* next;
    Node(int x){
        value=x;
        next=NULL;
    }

};

Node* rotateInKGroup(Node* head,int k)
{

    if(head==NULL || head->next==NULL) return head;

    Node* t_head=head;
    Node* r_head=head;
    Node* pre=t_head;
    Node* cur;
    Node* nex;
    int flag=0;


    int count=0;
    while(t_head!=NULL)
    {
        count++;
      t_head=  t_head->next;
    }
    t_head=head;

    while(count>=k)
    {

     pre=t_head;
     cur=t_head->next;
     nex=cur->next;

        for(int i=1;i<k;i++)
        {
            cout<<cur->value<<" ,";
            cur->next=pre;
            pre=cur;
            cur=nex;
            nex=nex->next;
        }
        
       t_head->next=cur->next;
       t_head=cur->next;
        count-=k;
        if(flag==0)
        {
            r_head=cur;
            flag=1;
        }

    }
    return r_head;
}


void insertNode(Node* head, int x)
{
    if(head==NULL)  
    {
    head=new Node(x);
    return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=new Node(x);


}

void printList(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }

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

printList(head);

 Node* newHead= rotateInKGroup(head,3);
cout<<endl;
printList(newHead);

}