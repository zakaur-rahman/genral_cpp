#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
    int a= 4;
    for(int i= 1; i<=a; i++){
        for(int j=a;j>=i;j--){
           cout<<i; 
        }cout<<endl;
        
    }

    return 0;
}
