/*****************************Program for adding of positive number*********************************/
#include <bits/stdc++.h>
using namespace std;
int r;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter the number"; //<< endl;
    cin >> n;
    while (n >= 0)
    {
        sum += n;
        cout << "Enter another Number\n"<<"\t";
        cin >> n;
    }
    cout << "\nThe sum is " << sum<< "\n";
}