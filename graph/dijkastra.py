import queue
import sys


def breathFirstSearch(adj_list,s):
    max_int = sys.maxsize
    v_queue=queue.Queue()
    v_queue.put({s:0})
    dist=[]
    path=[]
    for k,v in adj_list.items():

        dist.append(max_int)
        path.append([])
    dist[s]=0
    path[s].append(s)




    
    while(not v_queue.empty()):
        vw=v_queue.get()

        for key,value in vw.items():
            v=key

        for lt in adj_list[v]:
            
            
            for k,w in lt.items():
                if(dist[v]+w<dist[k]):
                    dist[k]=dist[v]+w
                    path[k]=[]
                    [path[k].append(i )  for i in path[v]] 
                    path[k].append(k)
                    v_queue.put({k:dist[k]})
                    

    return path








if __name__ == "__main__":
    adj_list={
        0:[{1:4},{2:4}],
        1:[{0:4},{2:2}],
        2:[{1:2},{0:4},{3:3},{5:6},{4:1}],
        3:[{2:3},{5:2}],
        4:[{2:1},{5:3}],
        5:[{3:2},{2:6},{4:3}]

    }

    adj_list20={
    0: [{1: 5}, {2: 7}, {3: 3}],
    1: [{10: 5}, {12: 2}, {4: 6}],
    2: [{1: 2}, {0: 7}, {3: 1}, {5: 4}, {4: 8}],
    3: [{2: 1}, {5: 9}, {0: 3}, {6: 2}],
    4: [{2: 8}, {1: 6}, {5: 3}, {7: 5}],
    5: [{3: 9}, {2: 4}, {4: 3}, {8: 7}],
    6: [{3: 2}, {7: 4}, {9: 6}],
    7: [{4: 5}, {6: 4}, {8: 1}, {10: 3}],
    8: [{5: 7}, {7: 1}, {9: 2}, {11: 5}],
    9: [{6: 6}, {8: 2}, {12: 4}],
    10: [{7: 3}, {13: 5}, {14: 7}],
    11: [{8: 5}, {14: 3}, {15: 2}],
    12: [{9: 4}, {16: 6}, {17: 8}],
    13: [{10: 5}, {18: 2}, {19: 4}],
    14: [{10: 7}, {11: 3}, {19: 1}],
    15: [{11: 2}, {18: 6}],
    16: [{12: 6}, {17: 5}],
    17: [{12: 8}, {16: 5}],
    18: [{13: 2}, {15: 6}],
    19: [{13: 4}, {14: 1}]
}

    ans=breathFirstSearch(adj_list,5)

    for i in ans:
        print(i)
