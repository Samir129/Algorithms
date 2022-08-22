// Search for an element in a matrix that is sorted rowwise and columnwise

#include<bits/stdc++.h>
using namespace std;

int stairCase(vector<vector<int>> v, int key){

    int i = 0, j = v[0].size() - 1;
 

    while(i < v.size() && j >= 0){
        
        if(v[i][j] == key) return key;
        
        if(v[i][j] > key) {
            j--;        
        }
        
        if(v[i][j] < key){
            i++;
        }
    }

    return -1;
}
int main(){

    vector<vector<int>> v{{10, 20, 30, 40},
                          {15, 25, 35, 45},
                          {27, 29, 37, 48},
                          {32, 33, 39, 50}};
    cout << stairCase(v, 50); 
    return 0;
}