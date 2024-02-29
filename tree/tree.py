
class Node:
 
    def __init__(self,leftNode,rightNode,frequency,c=None) -> None:
        self.frequency=frequency
        self.character=c
        self.leftNode=leftNode
        self.rightNode=rightNode

class Tree:
    def __init__(self,root:Node) -> None:
        self.root=root

    def addNode(self,frequency,character=None):
        rootNode=self.root
        insert_node=Node(None,None,frequency,character)
        def add_node_handler(rootNode,frequency):
        
            if(rootNode==None):
                rootNode=insert_node
                return rootNode
            elif(rootNode.frequency<=frequency):
                rootNode.rightNode=add_node_handler(rootNode.rightNode,frequency)
            else:
                rootNode.leftNode=add_node_handler(rootNode.leftNode,frequency)

            return rootNode
        
        add_node_handler(rootNode,frequency)


    def traversal(self):
        rootNode=self.root

        def traversal_handler(rootNode):
            if(rootNode!=None):

                traversal_handler(rootNode.leftNode)
                print(rootNode.frequency,rootNode.character)
                traversal_handler(rootNode.rightNode)

        traversal_handler(rootNode)







if __name__ == "__main__":
    root=Node(None,None,5)
    tree=Tree(root)
    tree.addNode(2,'d')
    tree.addNode(4,'c')
    tree.addNode(6)
    tree.addNode(7,'b')
    tree.addNode(13)
    tree.addNode(8,'a')
    tree.addNode(21)
    tree.traversal()
    



