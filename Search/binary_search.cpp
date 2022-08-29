#include<bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> a, int key, int l, int r){
    
    while(l <= r){
        int mid = (l + r)/2;

        if(a[mid] == key) return true;

        if(a[mid] > key) r = mid - 1;

        else l = mid + 1;
    }

    return false;

}
int main(){

    vector<int> a = {1, 3, 7, 9, 13, 15};
    cout << binary_search(a, -1, 0, a.size() - 1);
}