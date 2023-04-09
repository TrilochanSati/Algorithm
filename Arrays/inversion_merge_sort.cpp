#include <iostream>
#include <vector>
using namespace std;



int merge(int arr[],int l,int mid,int r)
{

cout<<"mid: "<<mid<<endl;
int count=0;

int t1=mid+1-l;
int t2=r-mid;

int temp1[t1];
int temp2[t2];

for(int i=0;i<t1;i++)
{
temp1[i]=arr[l+i];
}
for(int i=0;i<t2;i++)
{
temp2[i]=arr[mid+1+i];
}
int i=0;
int j=0;
int k=l;

while(i<t1 && j<t2)
{
if(temp1[i]>temp2[j])
{
arr[k]=temp2[j];
j+=1;
count=count+(mid-i);
}
else
{
arr[k]=temp1[i];
i+=1;
}

k+=1;

}



while(i<t1)
{
arr[k]=temp1[i];
k+=1;
i+=1;
}


while(j<t2)
{
arr[k]=temp2[j];
k+=1;
j+=1;
}

cout<<"count: "<<count<<endl;

return count;
}

int  mergeSort(int arr[],int l,int r)
{
int inCount=0;

int mid=(l+r)/2;

if(l==r)
{
return 0;
}


inCount+=mergeSort(arr,l,mid);
inCount+=mergeSort(arr,mid+1,r);
inCount+=merge(arr,l,mid,r);

return inCount;
}


int main()
{
int arr[]={5,3,2,1,4};

int n=sizeof(arr)/sizeof(arr[0]);

cout<<"inversion: "<<mergeSort(arr,0,n-1);

cout<<endl;

cout<<"sorted list: "<<endl;

for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ,";
}

return 0;
}
