#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=4; int row=1;
    while(row<=n){
        int col=1;
        int val=row;
        while(col<=row){
            cout<<val<<" ";
            val-=1;
            col+=1;
        }cout<<endl;
        row+=1;
    }

    return 0;
}
