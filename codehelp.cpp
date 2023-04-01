#include <iostream>

using namespace std;

int main()
{
   int row=1, n=4;
   while(row<=n){
       int val=n-row;
       while(val){
           cout<<" ";
           val-=1;
       }
       
       int col=1;
       while(col<=row){
           cout<<col;
           col=col+1;
       }
       
       int newVal=row-1;
       while(newVal){
           cout<<newVal;
           newVal-=1;
       }
       cout<<endl;
       row+=1;
   }
   
}

/*
Output

   1
  121
 12321
1234321

*/
