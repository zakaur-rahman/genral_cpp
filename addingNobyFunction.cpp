#include <bits/stdc++.h>
using namespace std;

int sum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a, b;
    cout << "Enter two numbers\n";
    cin >> a >> b;
    cout << "The sum of a+b= " << sum(a, b) << endl;
    return 0;
}