#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp


int minimumNumCoin(int v,int arr[],int n)
{
    int ans=0;
    int i=n-1;
   
    while(v>0)
    {
        if(v-arr[i]>=0)
        {
            v=v-arr[i];
            ans++;
        }
        else{
            i--;
        }
    }

   return ans; 
}

int main()
{
    int arr[]={1,2,5,10,20,50,100,500,1000};
    int size=sizeof(arr)/sizeof(arr[0]);

    int v=2051;

    cout<<minimumNumCoin(v,arr,size);





}