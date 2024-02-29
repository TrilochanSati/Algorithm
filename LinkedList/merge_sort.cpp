#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;


void merge(int arr[],int l,int m,int r)
{
    int lLen=m-l+1;
    int rLen=r-m;

    int lArr[lLen];
    int rArr[rLen];

    for(int i=0;i<lLen;i++)
    {
        lArr[i]=arr[l+i];
    }
    for(int i=0;i<rLen;i++)
    {
        rArr[i]=arr[m+1+i];
    }
    int i=0,j=0,k=l;

    while(i<lLen && j<rLen)
    {
        if(lArr[i]>=rArr[j])
        {
            arr[k]=rArr[j];
            j++;
            k++;
        }
        else{
            arr[k]=lArr[i];
            i++;
            k++;
        }

    }
    while(i<lLen)
    {
        arr[k]=lArr[i];
        i++;
        k++;
    }
        while(j<rLen)
    {
        arr[k]=lArr[j];
        j++;
        k++;
    }


}

void mergeSort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int mid=start+(end-start)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);

}


int main()
{

    int arr[]={5,4,3,2,1};

    mergeSort(arr,0,4);

    for(auto i:arr)
    {
        cout<<i;
    }
}