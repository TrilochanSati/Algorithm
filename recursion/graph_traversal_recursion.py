def traversal(graph,st,visted:[]):
    for v in graph:
        if v not in visted:
            print(v)
            visted.append(v)
            traversal(graph,v,visted)

        



if __name__ == "__main__":
    adj_list={"A":["E","B"],"B":["A","C"],"E":["A","D"],"D":["E","C","F"],"C":["B","D","E"],"F":["D"]}
    traversal(adj_list,"A",[])

   