#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+7;
int arr[N];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int dif[N];
    for (int i = 1; i <= 10; i++) {
        arr[i] = 5*i;
    }

    for (int i = 1; i <= 10; i++) {
        dif[i] = arr[i]-arr[i-1];
        cout << dif[i] << " ";
    }

    // prefix sum of dif array is the main array
    return 0;
} 