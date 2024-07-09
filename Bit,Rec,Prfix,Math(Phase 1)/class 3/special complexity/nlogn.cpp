#include <bits/stdc++.h>
using namespace std;

int main()
{       
    int n = 1000000; // 1e6 
    int complexity = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j+=i)
        {
            complexity++;
        }
    }
    cout << complexity <<endl;
    return 0;
}