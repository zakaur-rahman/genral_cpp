//Half pyramir of number 
#include <bits/stdc++.h>
using namespace std;
//Starting of main function 
int main()
{
    int n;
    cout << "Enter the number\n"; // Numbers of rows 
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
    return 0;
}
