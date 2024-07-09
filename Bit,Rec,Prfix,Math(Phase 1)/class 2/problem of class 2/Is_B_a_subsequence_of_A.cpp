#include <bits/stdc++.h>
using namespace std;

int main ()
{   
    int n,m; cin >> n >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m ; i++)
    {
        cin >> b[i];
    }

    int start = 0;

    for (int x = 0; x < m; x++)
    {   
        int red = 0;
        for (int indx = start; indx < n; indx++) 
        {
            if (b[x] == a[indx])
            {   
                start = indx+1;
                red = 1;
                break;
            }
        }
        if (red == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}