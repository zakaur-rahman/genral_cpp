#include <bits/stdc++.h>
using namespace std;

int fact(int a)
{
    int factorial = 1;
    for (int i = 1; i <= a; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;
    cout << "Enter the values of n, r" << endl;
    cin >> n >> r;
    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << ans << endl;
    return 0;
}