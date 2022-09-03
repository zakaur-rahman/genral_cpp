#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int p = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            cout << j << " ";
        }
        p--;

        cout << endl;
    }
}