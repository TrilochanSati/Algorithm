#include <iostream>
#include <vector>
using namespace std;


float power(float x,int n)
{
int k=1;

int flag=0;

if(n<0)
{
n=-1*n;
flag=1;
}


if(n==0)
{
return 1;
}




while(n>1)
{

if(n%2==0)
{

n=n/2;
x=x*x;
}

else if(n%2==1)
{
n=n/2;
k=x*k;
x=x*x;
}

cout<<x<<endl;
}

int ans=k*x;

if(flag==1)
{
return 1.0/ans;
}


return ans;

}

int main()
{

cout<<power(2,10);

return 0;

}
