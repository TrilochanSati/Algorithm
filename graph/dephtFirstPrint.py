graph={
    'a':['b','c'],
    'b':['d'],
    'c':['e'],
    'd':['f'],
    'e':[],
    'f':[]
}



def depthFirstPrint(graph,scr):
    stack=[]
    stack.append(scr)
    while len(stack)!=0:
        print(stack[-1])
        link=graph[stack[-1]]
        stack=stack[:-1]
        for node in link:
            stack.append(node)



depthFirstPrint(graph,'a')

