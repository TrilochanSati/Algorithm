#include <iostream>
#include <vector>
using namespace std;


int inversion(vector<int> &arr)
{

int count=0;
int n=arr.size();

for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
count+=1;
}

}
}

return count;
}


int main()
{
vector<int> arr={5,3,2,4,1};

cout<<inversion(arr);


}

