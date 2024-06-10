#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[]={2,4,1,5,53};

    int n = sizeof(arr) / sizeof(int);  // sizeof("any array") will return the size of arr in bytes 
    // int has 4 bytes // so we need to divide by 4 // 

    cout << n << endl<< endl;


    for (int l = 0 ; l < n; l++)    // i = for every individual single l
    {
        for (int r = l; r < n; r++)
        {
            for (int i = l ; i <= r; i++) 
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    //cout << (1 << 31) - 1 << endl;
    //cout << (1 << 30) -1 + (1 << 30) << endl; // to avoid overflow warning

    //cout << INT_MAX - pow(10,9);

    cout << (int) 'a' << " " << (int)'z' << endl;
    cout << (int) ',' - (int) ' ' << endl;
    cout << (3 * 1000000000 ) << endl;


    
    return 0;
}