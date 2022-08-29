#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> sums(1000);
    vector<int> queries(100);

    vector<int> arr;

    const int MAXSUM = 1000;
    bitset<MAXSUM> bit;

    bit.reset();
    bit[0] = 1;

    for(int i = 0; i < sums.size(); ++i){
        bit |= (bit << sums[i]);
    }

    for(auto x : queries){
        if(bit[x] & 1)
        cout << "Subset with sum is possible";
        else cout << "Not Possible";
    }
}