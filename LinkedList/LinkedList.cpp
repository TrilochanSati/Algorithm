#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp

struct Node
{
int data;
Node* next;
};

class LinkedList
{
public:
    Node* head;
public:
    LinkedList(): head(nullptr){}

    ~LinkedList(){
        Node* current=head;
        while(current!=nullptr){
            Node* next=current->next;
            delete current;
            current=next;
        }
    }

    Node* insertAtBeginning(int value){
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=head;
        head=newNode;
        return head;
    }

    void insertAtEnd(int value)
    {
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=nullptr;

        if(head==nullptr){
            head=newNode;
        }
        else
        {
            Node* current=head;
            while(current->next!=nullptr){
                current=current->next;
            }
            current->next=newNode;

        }
    }

    void deleteNode(int value){

        if(head==nullptr){
            return;
        }

        if(head->data==value){
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        else{
        Node* pre=head;
        Node* current=head->next;

        while(current->next!=nullptr){
            if(current->data==value){
                pre->next=current->next;
                delete current;

            }

        }

     
        }

    

    }
       void printList(){
            Node* current=head;
            while(current!=nullptr){
                cout<<current->data<<" ";
                current=current->next;
            }
        }

        void reverse()
{
    Node* pre=nullptr;
    Node* current=head;
    Node* nextNode=nullptr;
    while(current->next!=nullptr)
    {
        nextNode=current->next;

        current->next=pre;
        pre=current;
        current=nextNode;


    }
    current->next=pre;
    head=current;

}

};

