#include<bits/stdc++.h>
using namespace std;

int update(int &a, int p){
    a = a + 4;
    p = a;
    return p;
}

int main(){
    int a = 5;
    int p = 8;
    cout << "Before updating: "<<a<<" "<<p<<endl;
    //updating the value of variable 'a' using function call.
    int ap = update(a,p);
    cout<<"After Updating:"<<a<<" "<<ap<<endl;
}