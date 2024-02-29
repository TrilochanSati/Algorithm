# Python program to find the maximum profit job sequence from a given array 
# of jobs with deadlines and profits 

# A class to represent a job 
class Job:
    def __init__(self, id, dead, profit):
        self.id = id    # Job Id 
        self.dead = dead    # Deadline of job 
        self.profit = profit    # Profit if job is over before or on deadline 

class Solution:
    @staticmethod
    def compare_by_profit(a, b):
        return a.profit > b.profit

    def job_scheduling(self, arr, n):

        total_profit = 0
        total_jobs = 0
        ans = [0, 0]
        reg_arr = [0] * (n+1)
        arr.sort(key=lambda x: x.profit, reverse=True)

        i = 0

        while i < n:

            if reg_arr[arr[i].dead] == 0:
                reg_arr[arr[i].dead] = arr[i].profit
                print(f"profit:{arr[i].profit} deadline:{arr[i].dead}")
            else:
                j = arr[i].dead - 1
               
                while j > 0:
                    
                    if reg_arr[j] == 0:
                        reg_arr[j] = arr[i].profit
                        break
                        print(f"profit:{arr[i].profit} deadline:{arr[i].dead}")

                    j -= 1

            i += 1

        for i in range(n+1):
            if reg_arr[i] > 0:
                total_profit += reg_arr[i]
                total_jobs += 1

        ans[0] = total_jobs
        ans[1] = total_profit
        return ans

# Driver program to test methods 
if __name__ == "__main__":
    n = 5
    arr = [Job(1, 3, 16), Job(2, 5, 263), Job(3, 3, 449), Job(4, 1, 310),Job(5,5,68)]

    ob = Solution()
    result_pair = ob.job_scheduling(arr, n)
    for p in result_pair:
        print(p)
