#include <iostream>

using namespace std;

int main()
{
   int row=1, n=4 , b=0;
   while(row<=n){
       int col=n-row;
       while(col){
           cout<<" ";
           col-=1;
       }
       int val=1;
       while(val<=row){
           b+=1;
           cout<<b;
           val+=1;
       }
       cout<<endl;
       row+=1;
   }
   
}



/*
   1
  23
 456
78910
*/
