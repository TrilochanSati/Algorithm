'''
    Time complexity: O(V^2)
    Space complexity: O(V^2)

    where 'V' is the number of vertices in the graph.
'''

from typing import List, Tuple

# Finds the vertex with minimum distance
def minDistance(distance: List[int], visited: List[int], vertices: int) -> int:

    mini = float('inf')

    minVertex = 0

    for v in range(vertices):

        if (visited[v] == False and distance[v] <= mini):
            mini = distance[v]
            minVertex = v

    return minVertex

def dijkstraHelper(adjMat: List[List[Tuple[int, int]]], vertices: int, source: int) -> List[int]:

    distance = [float('inf')] * vertices

    visited = [False for i in range(vertices)]

    # Distance of source to itself is 0.
    distance[source] = 0
    
    for i in range(vertices-1):
        u = minDistance(distance, visited, vertices)

        # Mark the current vertex as visied.
        visited[u] = True

        # Update the distances of the adjacent nodes.
        for v in range(vertices):
            if (not visited[v] and adjMat[u][v] and distance[u] != float('inf') and distance[u] + adjMat[u][v] < distance[v]):
                distance[v] = distance[u] + adjMat[u][v]

    return distance

def dijkstra(edge: List[List[int]], vertices: int, edges: int, source: int) -> List[int]:
    adjMat = [[0 for i in range(vertices)] for j in range(vertices)]

    # Create an adjacency Matrix from the given input.
    for i in range(edges):
        adjMat[edge[i][0]][edge[i][1]] = edge[i][2]
        adjMat[edge[i][1]][edge[i][0]] = edge[i][2]

    return dijkstraHelper(adjMat, vertices, source)
