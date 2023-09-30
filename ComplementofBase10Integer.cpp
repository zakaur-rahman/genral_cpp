#include<bits/stdc++.h>
using namespace std;



  int bitwiseComplement(int n) {

    if(n==0){
      return 1;
    }
    int m = n; 
    int mask = 0;

    while(m != 0){
      mask = (mask << 1) | 1;
      m = m >> 1;
    }

    n = (~n) & mask;
    return n;
  }

int main(){
  cout << bitwiseComplement(5);
}