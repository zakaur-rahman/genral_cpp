#include<bits/stdc++.h>
using namespace std;

void sort(int* arr,int n){
    if(n == 0 || n == 1)
        return;

    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sort(arr, n-1);
}

int main()
{
    int arr[7] = {7,5,4,7,6,2,9};
    sort(arr,7);

    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}