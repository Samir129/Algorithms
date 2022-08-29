#include<bits/stdc++.h>
using namespace std;

void clearIBits(int &n, int i){
    // 1000101010
    // 1111111111
    // 1111110000
    // 1000100000

    n &= (-1 << i);


}
int main(){
    int n = 14;
    int i = 4;

    clearIBits(n, i);

    return 0;
}