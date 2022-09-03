#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin >> n;
    int original = n;
    int newNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        newNum += pow(lastDigit, 3);
        n = n / 10;
    }
    cout << newNum << endl
         << original << endl;
    if (newNum == original)
    {
        cout << "This is Armstrong Number" << endl;
    }
    else
    {
        cout << "This is not a Armstrong Number" << endl;
    }
    return 0;
}