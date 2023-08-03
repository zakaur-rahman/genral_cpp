#include<bits/stdc++.h>
using namespace std;

void digit(string arr[], int n){
    
    if(n == 0){
        return;
    }
    int tempDigit = n % 10;
    n /=10; 
    digit(arr, n);
    cout << arr[tempDigit]<<" ";
}

int main()
{   
   
    string arr[10] ={"zero","one","two","three",
                    "four","five","six","seven",
                    "eight","nine"};
    digit(arr,47563);
    return 0;
}