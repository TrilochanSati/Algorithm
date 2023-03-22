#include <iostream>
#include <vector>
using namespace std;


int maxProfit(int arr[],int n)
{
int min=arr[0];
int profit=0;

for(int i=1;i<n;i++)
{
if(arr[i]-min>profit)
{
profit=arr[i]-min;
}

if(arr[i]<min){
min=arr[i];
}

}
return profit;


}

int main()
{

int arr[]={7,5,4,3,2};

int size=sizeof(arr)/sizeof(arr[0]);

cout<<maxProfit(arr,size);

return 0;
}

