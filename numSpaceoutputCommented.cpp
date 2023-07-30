#include <iostream>

using namespace std;
// main function
int main()
{
   int row=1, n=4;
   while(row<=n){
       int col=n-row;
       while(col){
           cout<<" ";
           col-=1;
       }
       int val=1;
       while(val<=row){
           
           cout<<row;
           val+=1;
       }
       cout<<endl;
       row+=1;
   }
   
}

/*
   1
  22
 333
4444
*/
