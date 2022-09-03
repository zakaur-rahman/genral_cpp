/***************************Multiplication table*********************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    int ans = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Enter max no" << endl;
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        ans = n * i;
        cout << n << " * " << i << " = " << ans << endl;
    }
}