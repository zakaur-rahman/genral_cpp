#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=4; int row=1; char ch, val='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            ch=val+col-1;
            cout<<ch<<" ";
            col+=1;
        }cout<<endl;
        val=ch;
        row+=1;
    }

    return 0;
}
