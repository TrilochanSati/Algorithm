#include <iostream>
#include <vector>
using namespace std;


void sort(int arr[],int size){

int low=0,mid=0,high=size-1;

while(mid<=high){

if(arr[mid]==0){
int temp=arr[mid];
arr[mid]=arr[low];
arr[low]=temp;
mid++;
low++;
}

else if(arr[mid]==1){
mid++;
}

else if(arr[mid]==2){
int temp=arr[high];
arr[high]=arr[mid];
arr[mid]=temp;
high--;
}

}




}


int main(){

int arr[]={0,1,1,0,1,2,1,2,0,0,0,0,1};
int size=sizeof(arr)/sizeof(arr[0]);

cout<<size;

sort(arr,size);

cout<<"\n";

for(int i=0;i<size;i++){
cout<<arr[i];
}

return 0;
}



