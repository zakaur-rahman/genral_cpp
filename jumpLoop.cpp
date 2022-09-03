/**********************************Printing sum of odd number till n*****************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        // cout << i << endl;     
          sum += i;
    }
    cout << "Sum of odd no is = " << sum << endl;
}