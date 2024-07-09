#include <bits/stdc++.h>
using namespace std;

long long memo[100][100];

long long optimized_maze(int er,int ec)
{
    if (er == 1 || ec == 1) return 1;
    if (memo[er][ec] != -1) return memo [er][ec];
    return memo [er][ec] = optimized_maze(er-1,ec) + optimized_maze(er,ec-1);
}

int main()
{       
    for (int i = 1; i <= 100; i++)
    {
        for(int j = 1; j <= 100; j++)
        {
            memo[i][j] = -1;
        }
    }
    cout << optimized_maze(4,4) << endl;

    return 0;
}