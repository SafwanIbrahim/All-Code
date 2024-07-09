 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int arr[1000][1000];
int n,x,y; 

void using_faction(int x, int y,int n,int a[1000][1000])
{
    for (int i = 1; i <= n; i++)
    {
        swap(arr[x][i],arr[y][i]);
    }
    for (int i = 1; i <= n; i++)
    {
        swap(arr[i][x],arr[i][y]);
    }
    return;
}

int main()
{   
    cin >> n >> x >> y;

    for(int i = 1; i <= n; i ++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }

    using_faction(x,y,n,arr);

    for(int i = 1; i <= n; i ++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
} 


