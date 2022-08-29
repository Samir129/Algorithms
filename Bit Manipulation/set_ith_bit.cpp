#include<bits/stdc++.h>
using namespace std;

void setIthBit(int &n, int &i){

        // 1001010111
        // 0000010000

        n | (1 << i);
        return;
}
int main(){
    int n = 14;
    int i = 3;
    setIthBit(n, i);
    return 0;
}