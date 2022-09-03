#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int num=0;
    cout << "Enter the number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            num+=1;
            cout<<num <<" ";
        }cout<<"\n";
    }
    return 0;
}