#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    int divisors = 0;

    if (sqrt(n) - floor(sqrt(n))== 0) divisors++;
    for (int i = 1; i*i < n; i++)
    {
        if (n % i == 0) divisors += 2;
    }
    cout << divisors << endl;
}

int main()
{   
    int t = 1;
    cin >> t;    
    while(t--) solve(); 
    return 0;
} 


