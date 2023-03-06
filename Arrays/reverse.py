import math

def reverse(a,s,e):
	
	while s < e:
		t=a[s]
		a[s]=a[e]
		a[e]=t
		s+=1
		e-=1

	return a


a=[3,6,2,5,4,1]

s=4
e=5

print(reverse(a,s,e))
	
