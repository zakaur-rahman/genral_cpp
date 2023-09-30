#include <bits/stdc++.h>
using namespace std;

int counter(vector<int> &arr, int num)
{
    int count = 0;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}

int main()
{
   
    string str = "12100";
    vector<int> arr;
    unordered_map<int, int> mp;

    for (char x : str)
    {
        arr.push_back(atoi(&x));
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int count = counter(arr, i);
        if (count != arr[i])
        {
            break;
        }
        mp[arr[i]]++;

    }
    cout << mp.size();
    return 0;
}