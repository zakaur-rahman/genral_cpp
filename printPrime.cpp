#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n, s;
//     int num, i, k, l;
//     cout << "  Enter first number " << endl;
//     cin >> n;
//     cout << "  Enter second number " << endl;
//     cin >> s;
//     if (s > n)
//     {
//         for (num = n; num < s; num++)
//         {
//             for (i = 2; i < s; i++)
//             {
//                 if (num % i == 0)
//                 {
//                     break;
//                 }
//             }
//             if (i == num)
//             {
//                 cout << num << endl;
//             }
//         }
//     }
//     else
//     {
//         for (num = s; num < n; num++)
//         {
//             for (i = 2; i < n; i++)
//             {
//                 if (num % i == 0)
//                 {
//                     break;
//                 }
//             }
//             if (i == num)
//             {
//                 cout << i << endl;
//             }
//         }
//     }
//  }
// bool prime(int num)
// {
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
int main()
{
    int a, b;
    cout << "Enter two numbers\n";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i << endl;
        }
    }
    return 0; 
}