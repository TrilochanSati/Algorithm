#include <iostream>
#include <vector>
using namespace std;


int duplicate(vector<int> &arr)
{
int size=arr.size();

vector<int> feq(size,0);


for(int i=0;i<size;i++)
{
feq[arr[i]]+=1;

if(feq[arr[i]]>1)
{
cout<<feq[88]<<"my feq"<<endl;
return arr[i];
}

}

for(int j=0;j<size;j++)
{
cout<<feq[j]<<" ,";
}

return -1;

}


int main()
{

vector<int> arr={4,88,7,5,88,9,1};

cout<<duplicate(arr);

return 0;
}
