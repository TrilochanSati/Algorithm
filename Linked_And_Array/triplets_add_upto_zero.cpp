#include <iostream>
#include <vector>
#include <unistd.h>
#include <bits/stdc++.h>


using namespace std;

vector<vector<int>> tripletsAddUptoZero(vector<int> list)
{
    
    set<vector<int>> st;

    for(int i=0;i<list.size();i++)
    {
        for(int j=i+1;j<list.size();j++)
        {
            for(int k=j+1;k<list.size();k++)
            {
                if(list[i]!=list[j] &&  list[j]!=list[k])
                {
                    if((list[i]+list[j]+list[k])==0)
                    {
                        vector<int> ans;
                        ans.push_back(list[i]);
                        ans.push_back(list[j]);
                        ans.push_back(list[k]);
                        sort(ans.begin(),ans.end());
                        st.insert(ans);


                    }

                }
            }

        }
    }
    vector<vector<int>> res(st.begin(),st.end());
    return res;
}


int main()
{
vector<vector<int>> vec;

vector<int> list={-1,0,1,2,-1,-4};

vec=tripletsAddUptoZero(list);

for(int i=0;i<vec.size();i++)
{
for(int j=0;j<vec[i].size();j++)
{
    cout<<vec[i][j]<<" ";
}
cout<<endl;
}
}