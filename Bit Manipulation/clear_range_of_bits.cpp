#include<bits/stdc++.h>
using namespace std;

void clearBitsInRange(int &n, int i, int j){

    // 1001010101010
    // 1111100000000 a
    // 0000000100000
    // 0000000011111 b
    // 1111100011111 a | b
    
    int a = ~0 << (j + 1);
    int b = (1 << i) - 1;
    n &= (a | b);
}
int main(){
    int n = 134;
    int i = 3, j = 7;

    clearBitsInRange(n, i, j);
}