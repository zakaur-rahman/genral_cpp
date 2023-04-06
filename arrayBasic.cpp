// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
#include <climits>
using namespace std;

int getMax(int arr[]){
    int max = INT_MIN;
    for(int i = 0; i<; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getMin(int arr[]){
    int min = INT_MAX;
    for(int i = 0; i<5; i++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    return min;
}
int main() {
    int arr[10]={20,12,45,53,33};
   
    cout<<getMax(arr);


    return 0;
}
