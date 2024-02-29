import copy 
import math


def unique_subset_handle(arr,ind,cur:[],ans):
    ans.append(copy.deepcopy(cur))

    for i in range(ind,len(arr)):
        if(i==ind or arr[i]!=arr[i-1]):
            cur.append(arr[i])
            unique_subset_handle(arr,i+1,cur,ans)
            cur.remove(arr[i])

    return ans

def unique_subset(arr,ind):
    arr=sorted(arr)
    return unique_subset_handle(arr,ind,cur=[],ans=[])


if __name__ == "__main__":




    ans=unique_subset([1,2,2],0)
    print(ans)
   