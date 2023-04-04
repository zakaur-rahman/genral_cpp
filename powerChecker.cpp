// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
int main() {
    // Write C++ code here
    int n=61; int i=0;
    while(i<n){
      int  ans=pow(2,i);
      if(ans==n){
          cout<<"yes";
          break;
      }
      else if(ans>n){
          cout<<"no";
          break;
      }
      i++;
    }
    

    return 0;
}
