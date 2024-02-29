import copy
import math
# Power set using recursion


def unique_subset(arr:[],n,cur:[])->[[]]:
    if(n==len(arr)):
        return
    c=copy.deepcopy(cur)
    for i in range(len(c)):
        c[i].append(arr[n])
        cur.append(sorted(c[i]))

    unique_subset(arr,n+1,cur)

    t_set=set()

    for l in cur:
        t_set.add(tuple(l))

    ans=[] 

    for t in t_set:
        ans.append(list(t))

    
    

    return ans



if __name__ == "__main__":




    ans=unique_subset([1,2,2,3,2],0,[[]])
    print(ans)
   