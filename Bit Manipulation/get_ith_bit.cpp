#include<bits/stdc++.h>
using namespace std;

int getIthBit(int x, int i)
{
    return x & (1 << i);
} 
int main(){
    int n = 17;
    int i = 4;

    int x = getIthBit(n, i);

    return 0;
}