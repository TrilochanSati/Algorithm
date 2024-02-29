import copy

def combination_sum(index,target,cur:list,arr:list,ans:list):

    if target==0:
        ans.append(copy.deepcopy(cur))
        return
    if target<0 or  len(arr)<=index:
        return
    cur.append(arr[index])
    combination_sum(index,target-arr[index],cur,arr,ans)
    cur.remove(arr[index])
    combination_sum(index+1,target,cur,arr,ans)

    return ans






if __name__ == "__main__":
    ans=combination_sum(0,8,[],[10, 1, 2, 7, 6, 5],[])
    print(ans)
   