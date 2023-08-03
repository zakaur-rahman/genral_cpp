#include<bits/stdc++.h>
using namespace std;

bool keySearch(int *arr, int n, int key){
    if(n == 0){
        return false;
    }
    if(key == arr[0]){
        return true;
    }
    else
        return keySearch(arr + 1, n-1, key);
}

int main()
{
    int arr[6] = {1,3,12,6,7,9};
    int n = 6;
    int k = 9;

    bool ans = keySearch(arr, n, k);
    
    cout << ans;
    return 0;
    
}