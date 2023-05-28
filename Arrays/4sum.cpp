#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> quad(vector<int> &arr,int target)
{
sort(arr.begin(),arr.end());

vector<vector<int>> ans;

int n=arr.size()-1;

int first,second,more;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
int l=j+1;
int r=n;

first=arr[i]+arr[j];

while(l<r)
{
second=arr[l]+arr[r];

more=first+second;

if(more<target)
{
l++;
}
else if(more>target)
{
r--;
}
else
{
vector<int> quadruplet(4,0);
quadruplet[0]=arr[i];
quadruplet[1]=arr[j];
quadruplet[2]=arr[l];
quadruplet[3]=arr[r];

ans.push_back(quadruplet);

while(l<r && arr[l]==quadruplet[2])
{
++l;
}
while(l<r && arr[r]==quadruplet[3])
{
--r;
}

}

}
while(j+1<n && arr[j]==arr[j+1])
{
++j;
}
}
while(i+1<n && arr[i]==arr[i+1])
{
++i;
}
}







return ans;
}


int main()
{

vector<int> arr={1,0,-1,0,-2,2};

vector<vector<int>> ans=quad(arr,0);

for(int i=0;i<ans.size();i++)
{
for(int j=0;j<ans[i].size();j++)
{
cout<<ans[i][j]<<",";
}

cout<<endl;
}
return 0;
}
