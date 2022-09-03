#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    int inverse = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        inverse = inverse * 10 + lastDigit;
        n = n / 10;
    }
    cout << inverse;
    return 0;
}