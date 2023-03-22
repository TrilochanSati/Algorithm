#include <iostream>
#include <vector>
using namespace std;


int maxSubArray(vector<int> &arr,vector<int> &subarray)
{

int n=arr.size();
int sum=0;
int max=-1;

for(int i=0;i<n;i++)
for(int j=0;j<i;j++)
{
sum=0;
for(int k=j;k<i;k++)
{

sum+=arr[k];

}
if(sum>max){
max=sum;
subarray.clear();
subarray.push_back(j);
subarray.push_back(i);
}


}

return max;
}




int main(){

  vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
  vector<int> subarray;
  cout<<"Maximum value of subarray"<<maxSubArray(arr,subarray)<<"\n";

 cout<<"Subarray \n";

  for(int i=subarray[0];i<subarray[1];i++){
		 
	cout<<arr[i]<<",";

}
	



}
