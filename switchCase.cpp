/**************************simple calculator using switch case***********************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    char op;
    cout << "Enter the first number" << endl;
    cin >> n;
    cout << "Enter the operator" << endl;
    cin >> op;
    cout << "Enter the second number" << endl;
    cin >> m;
    switch (op)
    {
    case '+':
        cout << n + m << endl;
        break;
    case '-':
        cout << n - m << endl;
        break;
    case '*':
        cout << n * m << endl;
        break;

    case '/':
        cout << n / m << endl;
        break;
    case '%':
        cout << n % m << endl;
        break;
    default:
        cout << "Enter a valid operator" << endl;
        break;
    }
    return 0;
}