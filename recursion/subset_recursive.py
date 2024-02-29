import copy
# Power set using recursion


def subset(arr:[],n,cur:[])->[[]]:
    if(n==len(arr)):
        return
    c=copy.deepcopy(cur)
    for i in range(len(c)):
        c[i].append(arr[n])
        cur.append(c[i])

    subset(arr,n+1,cur)

    
    

    return cur




if __name__ == "__main__":
    ans=subset([1,2,2],0,[[]])
    print(ans)
   