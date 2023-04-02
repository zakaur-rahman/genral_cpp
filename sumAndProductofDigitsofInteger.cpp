#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=456; int sum=0, prod=1;
    for (int i = 0;i<=n; i++){
        int a=n%10;
        sum+=a;
        prod*=a;
        n=n/10;
    }
    cout<<sum<<" "<<prod<<" ";

    return 0;
}
