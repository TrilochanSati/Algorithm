graph={
    'a':['b','c'],
    'b':['d'],
    'c':['e'],
    'd':['f'],
    'e':[],
    'f':[],
    'k':['f','g']
}




def hasPath(graph,src,dest,path):
    path.append(src)
    if(src==dest):
        return True
    else:
        for node in graph[src]:
            if hasPath(graph,node,dest,path):
                return path
            
        path.remove(src)
            
    return False



    


print(hasPath(graph,'a','e',[]))