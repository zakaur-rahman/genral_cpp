#include<bits/stdc++.h>
using namespace std;

int binarySearch(int* nums, int left, int right, int target) {
    // Write your code here.
    if(left>right){
        return -1;
    }
    int mid = left + (right - left) / 2;

    if(nums[mid] == target)
    {
        return mid;
    }

    if(nums[mid] < target)
    {
        return binarySearch(nums, mid + 1, right, target);
    }
    else
    {
        return binarySearch(nums, left, mid - 1, target);
    }
}

int main(){
    int arr[6] = {1,3,5,6,7,9};
    int n = 6;
    int k = 67;
    cout<<binarySearch(arr,0,n-1,k)<<endl;
}