#include<iostream>
#include<vector>
using namespace std;


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }


    void printVectorOfVector(vector<vector<int>> vec){
        // Initializing the vector of vectors
    

    // Displaying the 2D vector
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    }


int main(){

vector<vector<int>> vec;

vec=generate(8);

printVectorOfVector(vec);

return 0;
}
