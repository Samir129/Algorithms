#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 37;

    cout << (n & (n-1) == 0) ? "Yes" : "No";

    return 0; 
}