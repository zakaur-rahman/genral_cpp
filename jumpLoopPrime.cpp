/****************************///\\\Programe to check Prime number\\\///*******************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i;
    cout << "Enter the number to check the prime" << endl;
    cin >> n;
    for ( i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime" << endl;
    }
}