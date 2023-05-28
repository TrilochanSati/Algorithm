#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int longestSubarraySum(vector<int> &arr)
{
std::unordered_map<int,int> hmap;


int n=arr.size();
int sum=0;
int max_val=0;

for(int i=0;i<n;i++)
{
sum+=arr[i];
if(sum==0)
{
max_val=i+1;
}

else
{

if(hmap.count(sum))
{
int l=hmap[sum];
int h=i-l;
max_val=max(max_val,h);
}
else
{
hmap[sum]=i;
}

}
}

return max_val;
}


int main()
{
vector<int> arr={6, -2, 2, -8, 1, 7, 4, -10};

cout<<longestSubarraySum(arr);

return 0;
}
