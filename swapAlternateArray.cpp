#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[7]={2,4,6,8,3,23,65};
    int n=6;
    for(int i=0;i<=n;i+=2){
        if(i+1<n)
          swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
