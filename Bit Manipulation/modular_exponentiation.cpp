#include<bits/stdc++.h>
using namespace std;

int calcPower(int a, int b, int M){
    int res = 1;

    while(b){

        if(b & 1){
            res = (res * a ) % M;;
        }
        a = (a * a ) % M;
        b >>= 1;
    }

    return res;
}
int main(){
    int a = 345;
    int b = 987;

    int M = 10^9 + 7;

    // Calculate a ^ b % M;

    int ans = calcPower(a, b, M);

    return 0;
}