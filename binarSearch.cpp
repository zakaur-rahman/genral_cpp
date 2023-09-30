#include <iostream>
using namespace std;

/* 
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        
        if(key==arr[mid]){
            return mid;
        }
        if(key >= arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }mid = start + (end - start)/2;
        
    }return -1;
}
*/

int binarySearch(int* arr, int size, int key){
    int s = 0;
    int e=size-1;
    int mid = s + (e - s ) /2;
    while((s<=e)){
        if(arr[mid] == key){
            return mid;
        }

        if(key < arr[mid]){
            e = mid;
        }else{
            s = mid;
        }
        mid = s + (e - s ) /2;

    }

}

int main()
{
    
    int arr[8]={4,5,7,8,9,40,72,87};
    
    int x = binarySearch(arr, 5, 5);
    cout << x ;

    return 0;
}