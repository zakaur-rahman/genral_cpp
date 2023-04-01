#include <iostream>

using namespace std;

int main()
{
   int row=1, n=5;
   while(row<=n){
       int val=1;
       while(val<=n-row+1){
           cout<<val;
           val+=1;
       }
       
       int col=row*2-2;
       while(col){
           cout<<"*";
           col=col-1;
       }
       
       int newVal=1;
       int num=n-row+1;
       while(newVal<=n-row+1){
           cout<<num;
           newVal+=1;
           num-=1;
       }
       cout<<endl;
       row+=1;
   }
   
}

/*
Output

1234554321
1234**4321
123****321
12******21
1********1

*/
