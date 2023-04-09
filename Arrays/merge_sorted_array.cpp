#include <iostream>
#include <vector>
using namespace std;


void mergeArray(vector<int> &arr1,vector<int> &arr2)
{

int n=arr1.size();
int m=arr2.size();
int size=n+m;


for(int i=0;i<size;i++)
{
for(int j=i+1;j<size;j++)
{
int p=i;
int k=j;

if(i>=n && j>=n)
{
p=i-n;
k=j-n;
if(arr2[p]>arr2[k])
{
int temp=arr2[p];
arr2[p]=arr2[k];
arr2[k]=temp;

}

}

else if(i>=n)
{
int p=i-n;
int k=j;

if(arr2[p]>arr1[k])
{
int temp=arr2[p];
arr2[p]=arr1[k];
arr1[k]=temp;
}

}


else if(j>=n)
{
int p=i;
int k=j-n;

if(arr1[p]>arr2[k])
{
int temp=arr1[p];
arr1[p]=arr2[k];
arr2[k]=temp;
}

}

}

}

}



int main()
{
vector<int> arr1={1,4,8,10};
vector<int> arr2={2,3,9};

mergeArray(arr1,arr2);

for(int i=0;i<arr1.size();i++)
{
cout<<arr1[i]<<", ";
}
for(int j=0;j<arr2.size();j++)
{
cout<<arr2[j]<<", ";
}

return 0;
}
