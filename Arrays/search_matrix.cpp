#include <iostream>
#include <vector>
using namespace std;

vector<int> searchMatrix(vector<vector<int>> &mat,int target)
{

vector<int> ans={-1,-1};


for(int i=0;i<mat.size();i++)
{
int l=0;
int r=mat[i].size()-1;

while(l<=r)
{
int m=l+((r-l)/2);
if(mat[i][m]==target)
{
ans[0]=i;
ans[1]=m;
return ans;
}

else if(mat[i][m]<target)
{
l=m+1;
}
else
{
r=m-1;
}

}




}
return ans;
}


int main()
{


vector<vector<int>> mat= {{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12}};


vector<int> ans=searchMatrix(mat,7);

for(int i=0;i<ans.size();i++)
{
cout<<ans[i]<<" ,";
}

return 0;
}
