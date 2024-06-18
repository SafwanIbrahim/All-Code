#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;
    int a[n],b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int o = 1; o <= n-1; o++)  // bubble sort
    {
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] > a[i+1])
            {
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
            if (b[i] > b[i+1])
            {
                int tmp = b[i];
                b[i] = b[i+1];
                b[i+1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) // checking 
    {
        if (a[i] != b[i])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    
    return 0;
}