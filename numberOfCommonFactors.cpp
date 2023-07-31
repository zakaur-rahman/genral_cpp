#include <bits/stdc++.h>
using namespace std;

int commonFactors(int a, int b)
{

    int count = 0;
    int smallestNumber = 0;
    if (a < b)
        smallestNumber = a;
    else
        smallestNumber = b;

    for (int i = 1; i <= smallestNumber; i++)
    {
        if (a % i == 0 && b % i == 0)
            count++;
    }

    return count;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << commonFactors(num1,num2);
}