#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n - 1; ++j){
            if(nums[j] > nums[j+1])
            swap(nums[j], nums[j+1]);
        }
    }
}
int main(){
    vector<int> a = {1, 4, 6, 9, 15, 6, 2, 0};
    selectionSort(a);

    return 0;
}