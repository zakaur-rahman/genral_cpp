#include<bits/stdc++.h>
using namespace std;

int sum(int *arr, int n, int ans){
    if(n == 0){
        return ans;
    }
    ans += arr[0];
    return sum(arr + 1, n-1, ans);
}

int main()
{
    int arr[6] = {1,3,12,6,7,9};
    int n = 6;
    int ans = 0;

    ans = sum(arr, n, ans);
    
    cout << ans;
    return 0;
    
}