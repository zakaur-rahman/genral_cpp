/***********************************Printing hollow rectangle*******************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter the number of rows\n";
    cin >> row;
    cout << "Enter the number of columns\n";
    cin >> column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i == 1 || j == 1 || i == row || j == column)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}