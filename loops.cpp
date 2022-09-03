/************************Sum of n natural number using while loop*********************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ans = 0;
    int i = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    while (i < n)
    {
        i++;
        ans += i; /* code */
    }

    cout << "The sum of " << n << " natural is number " << ans << endl;
}