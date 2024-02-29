from typing import List
import queue
import sys

graph={
    'a':['b','c'],
    'b':['d'],
    'c':['e'],
    'd':['f'],
    'e':[],
    'f':[]
}



def dfs(root,adj,visited=[]):
    if(root in visited):
        return
    print(root)
    for vertex in adj[root]:
        dfs(vertex,adj,visited)


dfs('a',adj=graph,visited=[])





