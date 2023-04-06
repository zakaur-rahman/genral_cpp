#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int arr[5]={20,12,45,53,33};
    int start;
    int end=4;
    while (start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
