#include <iostream>
#include <vector>
using namespace std;


int merge(int arr[],int temp[],int l,int m,int r)
{
int i=l,j=m,k=l,cnt=0;

while(i<=m-1 && j<=r)
{
if(arr[i]<=arr[j])
{
temp[k++]=arr[i++];
}
else
{
temp[k++]=arr[j++];
cnt=cnt+(m-i);
}
}

while(i<=m-1)
{
temp[k++]=arr[i++];
}
while(j<=r)
{
temp[k++]=arr[j++];
}
for(int i=l;i<=r;i++)
{
arr[i]=temp[i];
}

return cnt;
}

int mergeSort(int arr[],int temp[],int l,int r)
{
int count=0;
if(l<r)
{
int mid=(l+r)/2;
cout<<"mid"<<mid<<endl;
count+=mergeSort(arr,temp,l,mid);
count+=mergeSort(arr,temp,mid+1,r);
count+=merge(arr,temp,l,mid+1,r);

}

return count;
}

int main()
{
int arr[]={5,3,2,1,4};
int temp[5];
int inversion=mergeSort(arr,temp,0,4);

for(int i=0;i<5;i++)
{
cout<<arr[i];
}
cout<<endl;
cout<<"in:"<<inversion;
return 0;
}

