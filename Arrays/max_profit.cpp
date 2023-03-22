#include <iostream>
#include <vector>
using namespace std;

int maxProfite(int a[],int size){
int max=-1;


for(int i=0;i<size;i++)
for(int j=i+1;j<size;j++){
if((a[j]-a[i])>max)
{
max=a[j]-a[i];
}

}


return max;
}

int main()
{

int arr[]={7,6,4,3,1};

int size=sizeof(arr)/sizeof(arr[0]);

cout<<maxProfite(arr,size);

return 0;
}
