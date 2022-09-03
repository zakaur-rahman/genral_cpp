#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    int ans = fact(n);
    cout << "The factorial of" << n << "number is: " << ans << endl;
    return 0;
}