 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  *   Don't forget long long;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int r,c;

int a[105][105],b[105][105];

void solve(int raw, int coulumn)
{
    if (raw == r) 
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        return;
    }

    if (coulumn == c)
    {
        solve(raw+1,0);
    }    
    else
    {
        a[raw][coulumn] += b[raw][coulumn];
        solve(raw,coulumn+1);
    }
     
}

int main()
{   
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    solve(0,0);
    
    return 0;
} 






