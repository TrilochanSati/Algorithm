#include <iostream>
#include <vector>
#include <unistd.h>
#include <unordered_set>

using namespace std;

//g++ -std=c++11 -O2 -Wall exp.cpp -o exp

struct Item{
    int weight;
    int value;
};

class Solution
{
    public:
        bool static comp(Item a, Item b)
        {
            double r1=(double) a.value / (double) a.weight;
            double r2=(double) b.value / (double) b.weight;
            return r1>r2;
        }

        public:
            int fractionalKnapsack(int weight, Item arr[], int n)
            {
                sort(arr,arr+n,comp);

                int curWeight=0;
                int totalValue=0;
                int i=0;

            
            }
};

int main()
{
unordered_set<int> myHashSet;

myHashSet.insert(10);
myHashSet.insert(8);

    int key = 8;
    if (myHashSet.find(key) != myHashSet.end()) {
        std::cout << key << " is present in the HashSet." << std::endl;
    } else {
        std::cout << key << " is not present in the HashSet." << std::endl;
    }
    return 1;
}