#include <iostream>
#include <vector>
#include <unistd.h>
#include "LinkedList.cpp"

using namespace std;




int main(){

LinkedList list;
list.insertAtBeginning(100);
list.insertAtBeginning(200);
list.insertAtBeginning(300);
list.insertAtBeginning(400);
list.insertAtBeginning(500);
list.reverse();
list.printList();
}