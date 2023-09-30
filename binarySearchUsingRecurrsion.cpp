#include <bits/stdc++.h>
using namespace std;

/* int binarySearch(int* nums, int left, int right, int target) {
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
} */

int binarySearch(int *arr, int s, int e, int key)
{

    int mid = s + (e - s) / 2;

    if (key == arr[mid])
    {
        return mid;
    }
    if ((s >= e))
    {
        return -1;
    }

    if (key < arr[mid])
    {
        binarySearch(arr, s, mid, key);
    }
    if (key > arr[mid])
    {
        binarySearch(arr, mid, e, key);
    }
}

int main()
{
    int arr[6] = {1, 3, 5, 6, 7, 9};
    int k = 7;
    cout << binarySearch(arr, 0, 6 - 1, k) << endl;
}