
def get_minimum_platform(arr,dep,n)->int:
    arr=sorted(arr)
    dep=sorted(dep)
    count=0
    ans=0
    i=0
    j=0
    while(i<n and j<n):
        if(arr[i]<=dep[j]):
            count+=1
            i+=1
        else:
            count=0
            j+=1
        ans=max(ans,count)

    return ans
  







if __name__ == "__main__":
    n = 6
    arr=[900,945,955,1100,1500,1800]
    dep=[920,1200,1130,1150,1900,2000]
    print(get_minimum_platform(arr,dep,n))
