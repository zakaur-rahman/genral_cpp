
#include <iostream>
#include<math.h>
using namespace std;
int main() {
    // Write C++ code here
    int n=1101101, ans=0, i=0;
    while(n!=0){
        int bit=n%10;
        if(bit==1){
           ans+=pow(2,i); 
        }
        n/=10;
        i++;
    }
    cout<<ans;

    return 0;
}
