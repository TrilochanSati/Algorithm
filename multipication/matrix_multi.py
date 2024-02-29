import numpy as np

matrix1=[[1,2,3],[4,5,6],[7,8,9]]
matrix2=[[10,11,12],[13,14,15],[16,17,18]]

ans=[[0,0,0],[0,0,0],[0,0,0]]




for i in range(len(matrix1)):
    for j in range(len(matrix1[0])):
        for k in range(len(matrix1[0])):
           
           ans[i][j]+=matrix1[i][k]*matrix2[k][j]



print(ans)


res=np.dot(matrix1,matrix2)

print("np= ",res)

