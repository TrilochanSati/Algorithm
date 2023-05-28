#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;


void runme()
{
char *args[]={};
execvp("runme",args);


}

int maxOf(int a,int b)
{
if(a>b)
return a;
else 
return b;
}


int fib(int n)
{
if(n==1 || n==2)
return 1;
else
return fib(n-1)+fib(n-2);

}






int main()
{
runme();


vector<int> arr={1,2,3,4,5};
int n=arr.size();

for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
for(int k=i;k<=j;k++)
{
cout<<arr[k]<<",";
}
cout<<endl;
}
}
return 0;
}
