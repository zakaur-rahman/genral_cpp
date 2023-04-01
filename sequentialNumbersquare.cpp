#include <iostream>

using namespace std;

int main()
{
   int row=1, n=4;
   while(row<=n){
       int col=row-1;
       while(col){
           cout<<" ";
           col-=1;
       }
        int b=row;
       while(b<=n){
           cout<<b;
           b=b+1;
       }
       cout<<endl;
       row+=1;
   }
   
}

/*
1234
 234
  34
   4
*/
