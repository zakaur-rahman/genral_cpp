#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "even number";
    }
    else
    {
        cout << "odd";
    }

    int e;
    int sum = 0;
    cin >> e;
    for (int i = 1; i <= e; i++)
    {
        cout << i << endl;
        sum += i;
    }
    cout << sum;

    int p, q;
    cin >> p >> q;
    int i;
    int j;
    for (i = p; i < q; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}