#include<bits/stdc++.h>
using namespace std;

void update(int** p2){
    **p2 = **p2 + 1;
}

int main(){
    /* int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<* p << endl; // Output:  5
    cout << p << endl;
    cout << *p2 << endl;
    cout << p2 << endl;
    cout << &p2<<endl;

    cout << endl << endl;
    update(p2);
    cout<<&i << endl; // Output:  5
    cout << p << endl;
    cout << *p2 << endl;
    cout << p2 << endl;
    cout << &p2<<endl;
    cout << i;
    cout << endl << endl;
 */

    int i = 110;
    int *p = &i;
    int **p1 = &p;
    int second = ++**(p1) + 9;
    cout << i <<" " << second <<endl;

}