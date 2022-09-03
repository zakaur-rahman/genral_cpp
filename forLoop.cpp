#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ans = 0;
    cout << "enter the number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
        cout << "Sum of " << i << " natural number is " << ans << endl;
    }
    
}