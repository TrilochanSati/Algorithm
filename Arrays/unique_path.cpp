#include <iostream>
#include <vector>
using namespace std;

int path(vector<vector<int>> &mem , int m,int n,int r,int c)
{
int cnt=0;



if(m<r || n<c)
{
return 0;
}

if(m==r && n==c)
{
return 1;
}

if(mem[r][c]!=-1)
{
return mem[r][c];
}


cnt=path(mem, m,n,r+1,c)+path(mem,  m,n,r,c+1);
mem[r][c]=cnt;

return cnt;

}


int main()
{

int m=5,n=5;
vector<vector<int>> mem(6,vector<int>(n,-1));

cout<<path(mem,m-1,n-1,0,0);

return 0;
}
