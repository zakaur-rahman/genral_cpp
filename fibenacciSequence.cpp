#include <bits/stdc++.h>
using namespace std;
//Function for fibenacci Sequence 

void feb(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 0; i < n; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}
//Starting of main function 
int main()
{
    int n;
    cin >> n;
    feb(n);
    return 0;
}
