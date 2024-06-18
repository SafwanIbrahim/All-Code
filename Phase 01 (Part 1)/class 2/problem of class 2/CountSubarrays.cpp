#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long count = n;

        for (int l = 0; l < n; l++)
        {
            for (int r = l; r < n-1; r++)
            {
                if (arr[r] <= arr[r+1])
                {
                    count++;
                }
                else 
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}