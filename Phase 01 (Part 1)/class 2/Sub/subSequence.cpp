#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[35]={9,2,3,4,5}; // subsequence must maintain order but eliments can be missing like : {1,3,5} is SS
    // {1,3,2} is not // {} is also a subsequence

    int n = sizeof(arr) / sizeof(int);

    cout << (1 << n) << endl << endl; // all subsequence of arr = pow(2,5); // 1 can be taken or not // n can be taken or not
    // same from 1 to 5 all can be taken or not so product rule would be 2*2*2*2*2 means 2 power 5

    // generating all sub sequence :

    for (int mask = 0; mask < (1 << n); mask++ )
    {
        for (int index = 0; index <n ; index++)
        {
            if ((mask >> index) & 1 ) 
            {
                cout << arr[index] << " ";
            }
        }
        cout << endl;
    }

}