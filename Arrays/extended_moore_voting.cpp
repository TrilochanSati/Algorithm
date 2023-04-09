#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElements(vector<int> &arr)
{
vector<int> ans;

int n=arr.size();

int num1=arr[0];
int num2=arr[1];

int cnt1=1;
int cnt2=1;


for(int i=0;i<n;i++)
{
if(num1==arr[i])
{
cnt1++;
}
else if(num2==arr[i])
{
cnt2++;
}

else if(cnt1==0)
{
num1=arr[i];
cnt1++;
}
else if(cnt2==0)
{
num2=arr[i];
cnt2++;
}

else{
cnt1--;
cnt2--;
}

}
cnt1=0;
cnt2=0;
for(int i=0;i<n;i++)
{

if(arr[i]==num1)
{
cnt1++;
}
else if(arr[i]==num2)
{
cnt2++;
}


}
if(cnt1>n/3)
{
ans.push_back(num1);
}

if(cnt2>n/3)
{
ans.push_back(num2);
}



return ans;
}


int main()
{
vector<int> arr={11,33,33,11,33,11};

vector<int> ans=majorityElements(arr);

for(int i=0;i<ans.size();i++)
{
cout<<ans[i]<<",";
}

return 0;
}

