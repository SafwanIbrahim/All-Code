#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = INT_MIN;

    for (int i = 1; i < 5; i++)
    {   
        for (int j = 1; j < 5; j++)
        {
            int sum_at_hourglass = arr[i][j];

            for (int x = i-1; x <= i+1; x += 2)
            {
                for (int y = j-1; y <= j+1; y++)
                {
                    sum_at_hourglass += arr[x][y];
                }
            }
            sum = max(sum,sum_at_hourglass);
        }
    }
    cout << sum << endl;
    return 0;
}