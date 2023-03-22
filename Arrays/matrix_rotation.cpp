#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> & mat)
{
int n=mat.size();
int k=n-1;

vector<vector<int>> ans(n,vector<int>(n,0));

for(int i=0;i<n;i++)
{
for(int j=n-1;j>=0;j--)
{
ans[i][k-j]=mat[j][i];

}

}
return ans;
}

int main()
{

vector <vector<int>>  mat={{1,2,3},{4,5,6},{7,8,9}};

vector<vector<int>> ans=rotate(mat);

for(int i=0;i<ans.size();i++)
{
for(int j=0;j<ans[0].size();j++)
{

cout<<ans[i][j];
}
cout<<endl;
}


return 0;
}

