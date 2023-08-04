#include<bits/stdc++.h>
using namespace std;

bool palindromeChecker(string& str, int i, int j){
    if(i > j)
        return true;

    if(str[i] == str[j])
        return palindromeChecker(str, ++i,--j);
    else
        return false ;
}

int main()
{
    cout<< "Enter a String:" <<endl;
    string str = "";
    cin >> str;
    bool ans = palindromeChecker(str, 0, str.length()-1);
    if(ans)
        cout<<"Given string is Palindromic"<<endl;
    else
        cout <<"Given string is Not Palindromic"<<endl;
    return 0;
}