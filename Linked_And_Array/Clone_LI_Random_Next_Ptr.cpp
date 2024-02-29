#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;


class Node{
    public:
        int value;
        Node* next;
        Node* random;
        Node(int x)
        {
            value=x;
            next=nullptr;
            random=nullptr;
        }
};


Node* copyRandomList(Node* head) {
    unordered_map<Node*,Node*> hashMap;
    Node* temp = head;
//first iteration for inserting deep nodes of every node in the hashmap.
    while(temp != NULL) {
        Node* newNode = new Node(temp->value);
        hashMap[temp] = newNode;
        temp = temp->next;
    }
    Node* t = head;
//second iteration for linking next and random pointer as given question.
    while(t != NULL) {
        Node* node = hashMap[t];
        node->next = (t->next != NULL) ? hashMap[t->next]:NULL;
        node->random = (t->random != NULL) ? hashMap[t->random]:NULL;
        t = t->next;
    }
    return hashMap[head];
}



void printList(Node* &head)
{
    while(head!=nullptr)
    {
        cout<<head->value<<":";
        head->next!=nullptr ? cout<<head->next->value:cout<<"NULL";
        head->random!=nullptr ? cout<<","<<head->random->value:cout<<",NULL";
        cout<<endl;
        head=head->next;
    }
}

int main() {
    Node* head = NULL;
    
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    
    head = node1;
    head->next = node2;
    head->next->next = node3;
    head->next->next->next = node4;
    
    head->random = node4;
    head->next->random = node1;
    head->next->next->random = NULL;
    head->next->next->next->random = node2;
    
    cout<<"Original list:(current node:node pointed by next pointer,node pointed by random pointer)\n";
    printList(head);

     cout<<"Copy list:(current node:node pointed by next pointer,node pointed by random pointer)\n";
    Node* newHead = copyRandomList(head);
    printList(newHead); 

    return 0;
}