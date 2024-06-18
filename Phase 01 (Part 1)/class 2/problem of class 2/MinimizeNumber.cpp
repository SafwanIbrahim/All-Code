#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n ; cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2 == 1)
            {
                cout << count;
                return 0;
            }
            else 
            {
                arr[i] = (arr[i]/2);
            }
            
        }
        count++;
    }
    return 0;
}