#include <iostream>
#include <vector>
using namespace std;

int majority(vector<int> &arr)
{


int avg=arr.size()/2;

for(int i=0;i<arr.size();i++)
{
int count=0;
for(int j=0;j<arr.size();j++)
{
if(arr[i]==arr[j])
{
count+=1;
}

}
if(count>avg)
{
return arr[i];
}

}




return -1;
}


int main()
{

vector<int> arr={2,5,5,1,3,3,3,5,6,7,5,5,5,5,5};

cout<<majority(arr);

return 0;
}
