#include<bits/stdc++.h>
using namespace std;

bool check(int *arr, int n){
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else
        return check(arr + 1, n-1);
    
}

int main()
{
    int arr[6] = {1,3,12,6,7,9};
    bool checkArr = check(arr, 6);
    if(checkArr)
        cout << "Array is Sorted." << endl;
    else   
        cout << "Array is not Sorted." << endl;
    return 0;
}