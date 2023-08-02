#include <bits/stdc++.h>
using namespace std;

int factorialFunc(int i){
    if(i == 0)
        return 1;
    return i * factorialFunc(i-1);
}

int main(){
    int i = 5;
    cout << factorialFunc(i);
    return 0;
}