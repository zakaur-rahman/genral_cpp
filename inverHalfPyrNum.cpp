#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}