#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,m ; cin >> n >> m;

    char arr[n+1][m+1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x,y; cin >> x >> y;

    for (int i = x-1; i <= x+1; i++)
    {
        for (int j = y-1 ; j <= y+1; j++)
        {
            if (i == x && j == y)
            {
                continue;
            }
            if (i > 0 && i <= n && j > 0 && j <= m)
            {
                if (arr[i][j] == '.')
                {
                    cout << "no";
                    return 0;
                }
            }
        }
    }
    cout << "yes"<< endl;
    return 0;
}