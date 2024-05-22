#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int x ;

    cin >> x;

    for (int i = 0 ; i < n ; i++)
    {
        if (x == arr[i]) 
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}