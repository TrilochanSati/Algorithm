graph={
    'a':['b','c'],
    'b':['d'],
    'c':['e'],
    'd':['f'],
    'e':[],
    'f':[]
}



def breathFirstPrint(graph,scr):
    stack=[]
    stack.append(scr)
    while len(stack)!=0:
        print(stack[0])
        link=graph[stack[0]]
        stack=stack[1:]
        for node in link:
            stack.append(node)



breathFirstPrint(graph,'a')

