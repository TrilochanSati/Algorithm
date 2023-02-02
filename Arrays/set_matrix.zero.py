#Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.


def set_zeroes(arr):
	temp=[[0 for col in range(len(arr[0]))] for row in range(len(arr))]
	cols=len(arr[0])
	rows=len(arr)
	for i in range(rows):
		for j in range(cols):
			if arr[i][j]==0:
				temp[i][j]=1
	for i in range(rows):
		for j in range(cols):
			if temp[i][j]==1:
				for k in range(rows):
					arr[k][j]=0
				for l in range(cols):
					arr[i][l]=0


if __name__ == "__main__":
    arr = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]
    set_zeroes(arr)
    print("The Final Matrix is ")
    for i in range(len(arr)):
        for j in range(len(arr[0])):
            print(arr[i][j], end=" ")
        print()
