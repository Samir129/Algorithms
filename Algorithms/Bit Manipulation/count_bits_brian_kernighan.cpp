#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 15;
    int cnt = 0;
    while(n){
        n &= (n-1);
        cnt ++;
    }

    cout << " The number of set bits in " << n << " are: " << cnt << endl;

    return 0;
}