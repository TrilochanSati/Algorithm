from os import *
from sys import *
from collections import *
from math import *
from queue import PriorityQueue

class Job:
    def __init__(self,id,deadline,profit):
        self.id=id
        self.deadline=deadline
        self.profit=profit

    def __lt__(self,other):
        return self.profit>other.profit
    



def jobScheduling(jobs):
    pq=PriorityQueue()
    n=0
    for job in jobs:
        pq.put(Job(job[0],job[1],job[2]))
        n=max(n,job[1])


    arr=[0 for i in range(n+1) ]
    ans=0
    cnt=0
    



    while not pq.empty():
        job=pq.get()
        if(arr[job.deadline]==0):
            ans+=job.profit
            arr[job.deadline]=1
            cnt+=1
        else:
            for i in range(job.deadline,0,-1):
                if(arr[i]==0):
                    ans+=job.profit
                    arr[i]=1  
                    cnt+=1                  



  
    return [cnt,ans]   




if __name__ == "__main__":
   jobs = [[1, 2, 30], [2, 2, 40], [3, 1, 10],[4,1,10]]
   
   max_profit=jobScheduling(jobs)
   print(f"max profit {max_profit}")
