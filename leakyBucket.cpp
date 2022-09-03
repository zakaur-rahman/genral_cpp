#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, incomming, outgoing, storage, bucketSize;
    storage = 0;
    cout << "Enter bucket size" << endl;
    cin >> bucketSize;
    cout << "Enter Outgoing size" << endl;
    cin >> outgoing;
    cout << "Enter incomming size" << endl;
    cin >> incomming;
    cout << "Enter number of inputs" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << "incomming size is " << incomming << endl;
        if (incomming <= bucketSize - storage)
        {
            storage += incomming;
            cout << "Bucket buffer size is " << storage << " out of " << bucketSize << endl;
        }
        else
        {
            cout << "pocket loss: " << (incomming - (bucketSize - storage)) << endl;
            cout << "Bucket buffer size is " << storage << " out of " << bucketSize << endl;
        }
        storage -= outgoing;
        cout << "After outgoing " << storage << " packet left out of " << bucketSize << " in buffer" << endl;
        cout << endl;
    }
}