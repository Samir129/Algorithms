// Program to check if a number is a perfect square.


#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n){
    return (ceil((double)sqrt(n)) == floor((double)sqrt(n)));
}
int main(){
    int n = 25;
    cout << isPerfectSquare(n) << endl;

    return 0;
}