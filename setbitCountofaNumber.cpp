#include <iostream>
using namespace std;

int setBit(int a){
    int count=0;
    while(a!=0){
        int bit=a&1;
        if(bit==1){
            count++;
        }
        a=a>>1;
    }
    return count;
}


int main() {
    int ans1 = setBit(5);
    int ans2 = setBit(45);
    cout << ans1 + ans2;
    
    return 0;
}
