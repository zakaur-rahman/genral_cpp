#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (n > 0)
    {
        cout << "Enter number " << endl;
        cin >> n;
        int p = n;
        for (int i = 0; i <= n; i++)
        {
            for (int j = p; j > 0; j--)
            {
                cout << "* ";
            }
            p--;
            cout << endl;
        }
    }
}