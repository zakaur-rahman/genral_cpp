#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=4; int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col+row-2;
            cout<<ch<<" ";
            col+=1;
        }cout<<endl;
        row+=1;
    }

    return 0;
}

//  output
/*  
A B C D 
B C D E 
C D E F 
D E F G 
*/
