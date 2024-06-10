#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;

        int arr[n+1];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }


        int op = 0;

        for (int i = 1; i <= n; i++)
        {
            if ((arr[i] - i ) > op)
            {
                op = arr[i] - i;
            }
        }

        cout << op << endl;

    }
    return 0;
}