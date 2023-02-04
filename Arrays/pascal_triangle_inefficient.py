def pascal_triangle(rows):
	pre=[1,2,1]
	cur=[]
	for i in range(rows):
		if i==0:
			print([1])
		elif i==1:
			print(pre)
		else:
			cur.append(1)
			for k in range(1,len(pre),1):
				cur.append(pre[k-1]+pre[k])
			cur.append(1)
			print(cur)
			pre=cur
			cur=[]		
				










if __name__=="__main__":
	pascal_triangle(10)
