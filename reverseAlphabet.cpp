#include <iostream>


using namespace std;
int main() {
    // Write C++ code here
    int n=4; int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='D'+col-row;
            cout<<ch<<" ";
            col+=1;
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
