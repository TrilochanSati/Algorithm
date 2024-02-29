graph2={
    'a':['b','c'],
    'b':['d','c'],
    'c':['e','b','d'],
    'd':['f','c'],
    'e':[],
    'f':[]
}

graph={
    'a':['b','c'],
    'b':['d'],
    'c':['e'],
    'd':['f'],
    'e':[],
    'f':[]
}


def dfs(root,adj,visited=[],spanning_tree={}):
    if(root in visited):
        return False
    print(root)
    visited.append(root)

    for vertex in adj[root]:


        add=dfs(vertex,adj,visited,spanning_tree)
        if(add):
            if(root not in spanning_tree):
                spanning_tree[root]=[]
                spanning_tree[root].append(vertex)

            else:
                spanning_tree[root].append(vertex)
        

    return True



sp={}

dfs('a',graph2,visited=[],spanning_tree=sp)


print(sp)