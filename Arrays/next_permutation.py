

def next_permutation(num):
	arr=[int(x) for x in str(num)]
	f=-1
	arr_size=len(arr)
	for i in range(arr_size,-1,-1):
		if(arr[arr_size]>arr[i-1]):
			f=i-1
			temp=arr[f]
			arr[f]=arr[arr_size-1]
			arr[arr_size-1]=temp

	return arr

if __name__=="__main__":
	
	ans=next_permutation(12345)
	print(ans)
