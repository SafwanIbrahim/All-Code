#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n ; cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum_1 = 0;
    int sum_2 = 0;

    for (int i = 0, j = n-1; i < n; i++,j--)
    {
        sum_1 += arr[i][i];
        sum_2 += arr[i][j];
    }

    cout << abs(sum_1-sum_2) << endl;
    
    return 0;
}