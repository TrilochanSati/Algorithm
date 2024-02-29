#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp

int countPlatforms(int arr[],int dep[],int n)
{
    if(n==0)
    {
        return 0;
    }

   
    int ans=1;
    for(int i=0;i<n;i++)
    {
         int count=1;
    for(int j=i+1;j<n;j++)
    {   
        if((arr[i]>=arr[j] && arr[i]<=dep[j]) || (arr[j]>=arr[i] && arr[j]<=dep[i]))
        {
            count++;

        }

    }
    ans=max(count,ans);
    }
    return ans;
}

 int main()
 {
    int arr[]={900,945,955,1100,1500,1800};
    int dep[]={920,1200,1130,1150,1900,2000};
    int n=sizeof(dep)/sizeof(dep[0]);
    cout<<"Minimum number of Platforms required "<<countPlatforms(arr,dep,n)<<endl;
 }