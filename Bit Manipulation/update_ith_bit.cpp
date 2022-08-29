#include<bits/stdc++.h>
using namespace std;

void updateIthBit(int &n, int &i, int v){

    // 100101010
    // 100100010
    // 000000100
    // 100100110
    n &= ~(1 << i);
    n |= (v << i);
}
int main(){
    int n = 13;
    int i = 4;
    int v = 0; // or 1

    updateIthBit(n, i, v);

    return 0;
}