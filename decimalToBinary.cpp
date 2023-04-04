// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
int main() {
    // Write C++ code here
    int n=10, ans=0, i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;

    return 0;
}
