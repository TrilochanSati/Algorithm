#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp


int trap(vector<int> &arr){
    int n=arr.size();

    int waterTrapped=0;

    for(int i=0;i<n;i++)
    {
        int maxLeft=0,maxRight=0;

        for(int j=i;j>=0;j--)
        {
            maxLeft=max(maxLeft,arr[j]);
        }
         for(int j=i;j<n;j++)
        {
            maxRight=max(maxRight,arr[j]);
        }


        waterTrapped+=min(maxLeft,maxRight)-arr[i];
        
    }


        return waterTrapped;
}

int main()
{
    vector<int> arr;
    arr = {4,2,0,3,2,5};
  

    cout << "The water that can be trapped is " << trap(arr) << endl;
}