#include <iostream>

using namespace std;
int main() {
    // Write C++ code here
    int n=5; 
    
    
    int row=1; 
    while(row<=n){
        int col=1;
        while(col<=row-1){
            cout<<" ";
            col+=1;
        }
        
        while(col<=n){
            cout<<row;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

//  output
/*  
11111
 2222
  333
   44
    5

*/
