#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[7]={1,0,0,1,0,1,1};
    int i=0,j=6;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int a=0;a<7;a++){
        cout<<arr[a]<<" ";
    }

    return 0;
}
