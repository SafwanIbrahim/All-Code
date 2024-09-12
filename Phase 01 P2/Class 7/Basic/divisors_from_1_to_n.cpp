#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e7+9;
int d[N];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j+=i) {
            d[j]++;
        }
    }

    if (d[17] == 2) {
        cout << "17 is prime" << endl;
    }

    cout << d[100];
    
    return 0;
} 