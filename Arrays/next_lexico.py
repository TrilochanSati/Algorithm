


def reverse(arr,s,e):
	while s<e:
		t=arr[e]
		arr[e]=arr[s]
		arr[s]=t
		s+=1
		e-=1
	return arr



def next_lexico(arr):
	n=len(arr)-1
	p=-1
	for i in range(n,-1,-1):
		if arr[i]>arr[i-1]:
			p=i-1
			break
	
	if p==-1:
		return arr	

	for i in range(n,p-1,-1):
		if arr[i]>arr[p]:
			t=arr[i]
			arr[i]=arr[p]
			arr[p]=t
			break
	print(arr)	
	return reverse(arr,p+1,n)


#arr=[3,6,2,5,4,1]
arr=[2,1,3,4,5,6]


print(reverse(arr,0,5))
print(next_lexico(arr))
