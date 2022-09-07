#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int l, int r, int pivot){
    
    int i = l - 1;
    int j = l;

    for(int k = l; k < r; ++k){
        if(a[k] >= a[pivot]) j++;
        if(a[k] < a[pivot]){
            swap(a[k], a[++i]);
        }
    }

    swap(a[pivot], a[++i]);
    
    return i;
}
void quickSort(vector<int> &a, int l, int r){
    
    if(l >= r) return;
    
    int pivot = r;  // last index

    int i = partition(a, l, r, pivot);

    quickSort(a, l, i - 1);
    quickSort(a, i + 1, r);
}
int main(){
    
    vector<int> a = {5, 6, 10, 19, 17, 34, 29, 35, 97, 12};

    quickSort(a, 0, a.size() -  1);

    for(auto x : a){
        cout << x << " ";
    }
    
    cout << endl;
    return 0;

}