#include <iostream>
#include <vector>
using namespace std;


int majorityElement(vector<int> &arr)
{
int el=arr[0];
int cnt=1;


for(int i=0;i<arr.size();i++)
{
if(cnt==0)
{
el=arr[i];
cnt+=1;
}

else if(el==arr[i])
{
cnt+=1;

}

else
cnt--;

}
cnt=0;
for(int i=0;i<arr.size();i++)
{
if(arr[i]==el)
{
cnt+=1;
}

}

if(cnt>arr.size()/2)
{
return el;
}




return -1;
}


int main()
{

vector<int> arr={3,5,3,6,7,3,3,3};

cout<<majorityElement(arr);

return 0;
}
