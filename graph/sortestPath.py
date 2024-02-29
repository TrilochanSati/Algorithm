
edges=[
    ['w','x'],
    ['x','y'],
    ['z','y'],
    ['z','v'],
    ['w','v'],
    ['y','a'],
    ['a','b'],
    ['b','c'],
    ['c','d'],
    ['d','e'],
    ['e','v']
]


def edges_to_graph(edges):
    graph={}

    for edge in edges:
        if edge[0] not in graph:
            
            graph[edge[0]]=[edge[1]]

        else:
            graph[edge[0]].append(edge[1])

    
        if edge[1] not in graph:
            graph[edge[1]]=[edge[0]]

        else:

            graph[edge[1]].append(edge[0])

    return graph

def sortestPath(graph,src,dest):
    if src==dest:
        return [src]
    
    vertex=src
    visited=set(src)
    parent={}
    parent[src]=''
    queue=[src]

    while len(queue)!=0:
        for neighbour in graph[vertex]:
          #  print(neighbour)
            if neighbour  not in visited:
                visited.add(neighbour)
                queue.append(neighbour)
                parent[neighbour]=vertex

                if neighbour==dest:
                    cur=neighbour 
                    path=[]
                    print("pa",parent)

                    while cur in parent:
                        #print(cur)
                        path.append(cur)
                        cur=parent[cur] 

                    return path[::-1]
        
        queue=queue[1:]
        vertex=queue[0]




print(edges_to_graph(edges))


print(sortestPath(edges_to_graph(edges),'w','c'))



