import copy


def subset(arr:[],n,cur:[])->[[]]:
    if(n==len(arr)):
        return
    c=copy.deepcopy(cur)
    for i in range(len(c)):
        c[i].append(arr[n])
        cur.append(c[i])

    subset(arr,n+1,cur)

    
    

    return cur

def subset_sum():
    power_set=subset([18,7,10,16],0,[[]])
    print(f"power set:{power_set}")
    ans=[]
    for s in power_set:
        sum=0
        for i in s:
            
            sum+=i
        ans.append(sum)
    ans=sorted(ans)
    return ans





if __name__ == "__main__":
    ans=subset_sum()
    print(ans)
   