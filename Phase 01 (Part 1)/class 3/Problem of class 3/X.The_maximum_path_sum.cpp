#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'


const int RC = 25;
int a[RC][RC];
int n,m,maxi;

void max_path(int i,int j,int sum = 0)
{
    if (i == n && j == m)
    {
        maxi = max(sum,maxi);
        return;
    }

    if (i+1 <= n)
    {   
        max_path(i+1,j,sum + a[i+1][j]);

    }
    if(j+1 <= m)
    {
        max_path(i,j+1,sum + a[i][j+1]);
    }
}


int main()
{   
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= m; k++)
        {
            cin >> a[i][k];
        }
    }
    maxi = INT_MIN;
    max_path(1,1,a[1][1]);
    cout << maxi << endl;
    
    return 0;
} 
  
