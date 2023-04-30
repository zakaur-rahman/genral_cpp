#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = (start + end)/2;
        
        if(key==arr[mid]){
            return mid;
        }
        if(key >= arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }mid = (start + end)/2;
        
    }return -1;
}

int main()
{
    
    int arr[5]={4,5,7,8,9};
    
    int x = binarySearch(arr 5 8);
    cout << x ;

    return 0;
