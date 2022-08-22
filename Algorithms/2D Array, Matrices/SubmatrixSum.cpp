// Find the sum of a submatrix using preprocessing (prefix Sum) for a large number of queries

#include<bits/stdc++.h>
using namespace std;

void print2DMatrix(vector<vector<int>> v){
    for(auto x : v){
        for(int y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    /*
    1 2 3 4 6           
    5 3 8 1 2
    4 6 7 5 5
    2 4 8 9 4
    
    1 3 6 10 16                  1 2 3 4 6
    5 8 16 17 19                6 5 11 5 8
    4 10 17 22 27               10 11 18 10 13
    2 6 14 23 27                12 15 26 29 17
    
    */
    vector<vector<int>> prefixXMatrix;
    for(auto x : v){
        vector<int> temp(x.size());
        temp[0] = x[0];
        for(int i = 1; i < x.size(); ++i){
            temp[i] += temp[i-1] + x[i];
        }
        prefixXMatrix.push_back(temp);
    }

    print2DMatrix(prefixXMatrix);
    vector<vector<int>> prefixYMatrix(v.size(), vector<int>(v[0].size(), 0));

    // print2DMatrix(prefixYMatrix);

    for(int i = 0; i < 1; ++i){
        for(int j = 0; j < v[i].size(); ++j){
            prefixYMatrix[i][j] = v[i][j];
            }
    }

    print2DMatrix(prefixYMatrix);

    for(int i = 1; i < v.size(); ++i){
        for(int j = 0; j < v[i].size(); ++j){
            prefixYMatrix[i][j] = prefixYMatrix[i-1][j] + v[i-1][j];
        }
    }
    
    print2DMatrix(prefixYMatrix);
    
    int sum = prefixXMatrix[sr][ec] + prefixXMatrix[er][ec] + prefixYMatrix[er][ec] + prefixYMatrix[er][sc] - v[sr][sc] - v[sr][ec] -v[er][sc] - v[er][ec];
    
    if(sr > 1) sum -= (prefixYMatrix[sr-1][ec] + prefixYMatrix[sr-1][sc]);
    if(sc > 1) sum -= (prefixXMatrix[sr][sc-1] + prefixXMatrix[er][sc-1]);
    
    return sum;
    // vector<vector<int>> prefixSumMatrix;
    
    // for(int i = 0; i < v.size(); ++i){
    //     vector<int> temp(v[i].size(), 0);
    //     prefixSumMatrix.push_back(temp);
    //     for(int j = 0; j < v[i].size(); ++j){
    //         int sum = 0;
    //         for(int x = 0; x <= i; ++x){
    //             for(int y = 0; y <= j; ++y){
    //                 sum += v[x][y];
    //             }
    //         }
    //         prefixSumMatrix[i][j] = sum;
    //     }
    // }
    
    // return prefixSumMatrix[er][ec] - prefixSumMatrix[sr][sc];
    
}

int main(){
    vector<vector<int>> v = {{1, 2, 3, 4, 6},
                    {5, 3, 8, 1, 2},
                    {4, 6, 7, 5, 5},
                    {2, 4, 8, 9, 4} };

    int sr = 0,  sc = 0, er = 1, ec = 1;

    cout << sum(v, sr, sc, er, ec);
    return 0;
}