import math

def minimum_coin(input)->int:
    supply=[ 1, 2, 5, 10, 20, 50, 100, 500, 1000]
    ans=[]
    i=8

    while(input>0):
        if(input-supply[i]>=0):
            q=math.floor(input/supply[i])
            
            input=input-(supply[i]*q)
            for k in range(q):
                ans.append(supply[i])
        else:
            i-=1

    return ans








if __name__ == "__main__":
    res=minimum_coin(3021)
    for r in res:
        print(r)
