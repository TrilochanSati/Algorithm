#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp

int maxConsecutiveOne(int *arr,int n)
{
    int tempMax=0;
    int resMax=0;
for(int i=0;i<n;i++)
{
    
    if(arr[i]==1)
    {
        tempMax++;

    }
    else
    {
        tempMax=0;
    }
            resMax=max(tempMax,resMax);

}
    return resMax;
}

int main()
{
    int arr[]={1,1,0,1,1,1,1,1,1,1,1,0,0,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
 
   cout<<"Maximum consecutive one: "<< maxConsecutiveOne(arr,size)<<endl;
}