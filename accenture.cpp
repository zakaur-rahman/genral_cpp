#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>even;
    vector<vector<int>>odd;
    
    int arr[4][4] = {{5,8,3,4},{5,2,7,5}, {9,12,23,13},{6,11,10,2}};
    for(int i = 0; i < 7; i++){
        if(i%2 == 0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }    

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    cout << even[even.size()-2] + odd[even.size()-1];
    
    return 0;
} 