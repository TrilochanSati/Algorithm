import copy

def palindrome_parition(input:str,index,n,cur,ans):
    if(n==index):
        ans.append(copy.deepcopy(cur))
        return
    for k in range(index,n):


        sub_string=input[int(index):int(k+1)]
        if(sub_string==sub_string[::-1]):
            cur.append(sub_string)
            palindrome_parition(input,k+1,n,cur,ans)
            cur.remove(sub_string)
    return ans







if __name__=="__main__":
    input="aaaaa"
    n=len(input)
    ans=palindrome_parition(input,0,n,[],[])
    print(len(ans))
    for lt in ans:
        for it in lt:
            print(it,end=" ")

        print()




