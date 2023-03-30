#include <iostream>

using namespace std;
int main() {
    // Write C++ code here
    int n=5; int row=1; 
    while(row<=n){
        int col=1;
        char ch='A'+n-row;
        while(col<=row){
            cout<<ch<<" ";
            col+=1;
            ch+=1;
        }cout<<endl;
        row+=1;
    }

    return 0;
}

//  output
/*  
D 
C D 
B C D 
A B C D  
*/
