#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[10];
    int* p = &arr[0];
    for (int i = 0; i < 10; i++) {   
        *(p+i) = 2 ;     
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
} 