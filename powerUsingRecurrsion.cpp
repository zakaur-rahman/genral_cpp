#include<bits/stdc++.h>
using namespace std;
int ans = 1;
int power(int a, int b){
    if (b==0)
        return 1;

    if(b == 1)
        return a;
    
    if(b % 2 != 0){
        return a * power(a, b-1);

    }
    else{
        return power(a*a,b/2);
    }
    
}

int main()
{
    int a = 3;
    int b = 7;
    int ans = power(a,b);
    cout << ans;
    return 0;
}