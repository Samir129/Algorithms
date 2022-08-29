#include<bits/stdc++.h>
using namespace std;

void clearIthBit(int &n, int &i){
    // 100101001
    // 000001000
    // 111110111
    n & ~(1 << i);
    return;
}
int main(){
    int n = 7, i = 3;

    clearIthBit(n, i);

    return 0;
}