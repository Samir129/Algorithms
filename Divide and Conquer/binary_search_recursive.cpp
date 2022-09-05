#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int key, int l, int r){
    if(l > r) return -1;

    int mid = l + (r - l >> 1);

    if(v[mid] == key) return mid;
    else if(v[mid] < key) return binarySearch(v, key, mid+1, r);
    else return binarySearch(v, key, l, mid-1);
}
int main(){
    return 0;
}