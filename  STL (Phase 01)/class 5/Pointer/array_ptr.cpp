#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[10];    // difference are 4;
    for (int i = 0; i < 5; i++)
    {
        cout << &arr[i] << endl;
        arr[i] = i * 5;
    }



    int* p = &arr[0];
    p += 4 ;

    cout << *p << endl; // pointer was pointing 0-th index then we added 4; so it is arr[4];
    cout << arr[4] << endl;
    
    cout << endl;
    ll arr2[10];  // difference are 8 ;
     
    for (int i = 0; i < 2; i++)
    {
        cout << &arr2[i] << endl;
    }
    
    return 0;
} 