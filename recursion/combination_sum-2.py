import copy


def combination_sum_handler(index,arr,cur=[],ans=[],target=0):
    check_target=0
    for i in cur:
        check_target+=i
    if check_target==target:
        ans.append(copy.deepcopy(cur))

    for k in range(index,len(arr)):
        if(index==k or arr[k]!=arr[k-1]):
            cur.append(arr[k])
            combination_sum_handler(k+1,arr,cur,ans,target)
            cur.remove(arr[k])

    return ans


def combination_sum(arr):
    arr=sorted(arr)
    ans=combination_sum_handler(0,arr,[],[],8)
    print(ans)





if __name__=="__main__":
    arr=[10, 1, 2, 7, 6, 1 , 5]
    combination_sum(arr)



