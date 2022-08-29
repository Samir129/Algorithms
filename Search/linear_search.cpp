#include<bits/stdc++.h>
using namespace std;

bool linear_search(vector<int> a, int key){
    for(auto x : a){
        if(x == key) return true;
    }

    return false;
}
int main(){
    vector<int> a = {1, 4, 9, -10, -4, 3};
    cout << linear_search(a, 5);
    return 0;
}