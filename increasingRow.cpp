#include <iostream>

using namespace std;

int main()
{
   int row=1, n=4;
   while(row<=n){
       
       int col=1;
       while(col<=row){
           cout<<row-col+1;
           col=col+1;
       }
       cout<<endl;
       row+=1;
   }
   
}

/*
1
21
321
4321
*/
