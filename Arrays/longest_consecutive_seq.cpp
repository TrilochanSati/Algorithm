#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int max(int a,int b)
{
if(a>b)
return a;
else 
return b;

}

int longestSeq(vector<int> &arr)
{
set<int> hashSet;
for(int num:arr)
{
hashSet.insert(num);
}
int n=arr.size();

int longestStreak=0;
int i=0;
while(i<n)
{
if(!hashSet.count(arr[i]-1))
{
int curNum=arr[i],temp=1;

while(hashSet.count(curNum+1))
{
temp+=1;
curNum++;
}
longestStreak=max(temp,longestStreak);

}
i++;
}


return longestStreak;
}

int main()
{
vector<int> arr={13,14,16,8,5,7,6,10,11,12,15};

cout<<longestSeq(arr);

return 0;
}

