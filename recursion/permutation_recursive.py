import copy

def permutation(index,n,arr,cur,ans):
 
    if(n==index and n==len(cur)):
        ans.append(copy.deepcopy(cur))
        return
    for i in range(index,n):
        for k in arr:
            if k not in cur:
                cur.append(k)
                permutation(i+1,n,arr,cur,ans)
                cur.remove(k)

    return ans




if __name__=="__main__":
    arr=[1,2,3]
    n=len(arr)
    ans=permutation(0,n,arr,[],[])
    print(ans)
