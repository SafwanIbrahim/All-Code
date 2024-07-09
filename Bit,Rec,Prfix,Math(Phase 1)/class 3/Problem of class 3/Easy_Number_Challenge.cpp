#include <bits/stdc++.h>
using namespace std;

int divisors(int n)
{
    int ans = 0;
    if (sqrt(n) - int(sqrt(n)) == 0) ans++;
    for (int i = 1; i*i < n; i++)
    {
        if (n % i == 0)
        {
            ans+= 2;
        }
    }
    return ans;
}

int main()
{
    int a,b,c; cin >> a >> b >> c;
    int mod = (1 << 30);
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                int need = i*j*k;
                sum = sum % mod;
                sum += divisors(need) % mod;
            }
        }
    }
    cout << sum % mod << endl;
}