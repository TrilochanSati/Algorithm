class Node:
    def __init__(self,x) -> None:
        self.value=x
        self.next=None



def insert_node(head,x):
    ins=Node(x)
    if(head==None):
        head.next=ins
        return
    
    temp=head
    
    while(temp.next!=None):
        temp=temp.next

    temp.next=ins


def print_list(head):
    temp=head

    while(temp!=None):
        print(temp.value)
        temp=temp.next


head=Node(1)
insert_node(head,2)
insert_node(head,3)
insert_node(head,4)

print_list(head)

    


        