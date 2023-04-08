#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[7]={3,5,6,2,8,9,26};
    for(int i=0;i<7;i+=2){
        if(i+1<7){
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
        }
    }
    for (int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
