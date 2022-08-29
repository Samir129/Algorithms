#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int end){
    int mid = (start + end ) >> 1;

    int i = start;
    int j = mid + 1;

    vector<int> temp;

    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i++]);
        }

        else temp.push_back(arr[j++]);
    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= end){
        temp.push_back(arr[j++]);
    }

    int k = start;
    for(auto x : temp){
        arr[k++] = x;
    }
    return;   
}
void mergeSort(vector<int> &arr, int start, int end){
    if(start >= end)
    return;

    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, end);
}
int main(){
    vector<int> arr = {0, 12, 2, 5, 10, 6, 8, 31, -1, 100, 42, 36};

    mergeSort(arr, 0, arr.size()- 1);

    for(auto x : arr){
        cout << x << " ";
    }
    return 0;
}