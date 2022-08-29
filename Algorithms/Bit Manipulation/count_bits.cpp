    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int n = 37;
        int i = 0;
        int cnt = 0;
        while(n){
            if(n & 1) cnt++;
            n >>= 1;
        }
        cout << "The number of set bits are: " << cnt << endl;

        return 0;
    }