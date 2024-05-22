#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[]={2,4,1,5,53};

    int n = sizeof(arr) / sizeof(int);  // sizeof("any array") will return the size of arr in bytes 
    // int has 4 bytes // so we need to divide by 4 // 

    cout << n << endl<< endl;


    for (int i = 0 ; i < n; i++)    // i = for every individual single l
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i ; k <= j; k++) 
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    cout << (1 << 31) - 1 << endl;
    
    return 0;
}