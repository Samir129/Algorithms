// Used to find the number of prime numbers given upper value 'R' (1, R]

#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int R){
    
    vector<int> arr (R+1, 1);

    for(int j = 2; j < R/2; ++j){
        for(int i = j; i < R+1; i += j){
            if(arr[i] == 1 && i!=j)
            arr[i] = 0;
        }
    }

    vector<int> prime;
    for(int i = 2; i <= R; ++i){
        if(arr[i]) prime.push_back(i);
    }

    return prime;

}
int main(){

    int upper_range = 100;
    vector<int> prime = sieve(upper_range);

    for(auto x : prime)
    cout << x << " ";


    return 0;
}