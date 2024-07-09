#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n ; cin >> n;

    int arr[n];
    int fr[n+1];

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        fr[i] = 0;
    }

    for (int i = 1; i < n ; i++)
    {
        fr[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (fr[i] == 0)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}