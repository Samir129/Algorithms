#include <bits/stdc++.h>
#include "vector.h"
using namespace std;


int main()
{
    Vector <int> v  (10);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i = 0 ; i < 5; ++i){
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << " " << v.capacity() << endl;

    v.pop_back();

    cout << v.front() << " " << v.back() << " " << v.size() << " " << v.capacity() <<  endl;

    return 0;
}