import math
def factorial(n):
    if n==1 or n==0:
        return 1
    
    return n*factorial(n-1)


def k_permutation(k,arr:list,ans:str):
    
    n=len(arr)

    if(n==0):
        return ans
    else:
        n_fact=factorial(n-1)
        block=math.floor(k/n_fact)
        print(block)
        left=k%n_fact
        ans+=str(arr[block])
        arr.remove(arr[block])
        ans=k_permutation(left,arr,ans)

    return ans



if __name__=="__main__":
    n=4
    arr=[i for i in range(1,n+1)]
    print(arr)
    k=17
    print(k_permutation(k-1,arr,""))
