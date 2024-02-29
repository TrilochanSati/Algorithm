#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp
//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 



class Solution 
{

    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static compareByProfit(Job& a, Job& b)
    {
        return a.profit>b.profit;
    }

    vector<int> JobScheduling(Job arr[], int n) 
 { 
      cout<<"hello";
        int totalProfit=0;
        int totalJob=0;
        vector<int> ans;
        vector<int> regArr(10,0);
        sort(arr,arr+n,compareByProfit);

   
        int i=0;
  cout<<"hello";
        while(i<n)
        {
              cout<<"hello";
            if(regArr[arr[i].dead]==0)
            {
                regArr[arr[i].dead]=arr[i].profit;

            }
            else
            {
                int j=arr[i].dead-1;
                cout<<"hello";
            

                while(j>0)
                {
                    if(regArr[j]==0)
                    {
                        regArr[j]=arr[i].profit;
                    }
                    j--;
                    
                }
                

                
            }
            i++;
         
        }

        for(int i=0;i<n;i++)
        {
            if(regArr[i]>0)
            {
                totalProfit+=regArr[i];
                totalJob+=1;

            }
            
        }
        ans[0]=totalJob;
        ans[1]=totalProfit;
        cout<<totalJob<<" :"<<totalProfit;
       return ans;
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
      int n = 4;
   Job arr[] = {{1,4,20},{2,1,10},{3,2,40},{4,2,30}};

   Solution ob;
   vector<int> pair=ob.JobScheduling(arr,n);

	return 0; 
}






