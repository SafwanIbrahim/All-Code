#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d; cin >> a >> b >> c >> d;
    int misha = max(3*a/10 , a-a*c/250);
    int vasya = max(3*b/10 ,b-b*d/250);
    if (misha > vasya) cout << "Misha\n";
    else if (vasya > misha) cout << "Vasya\n";
    else cout << "Tie\n";
    
    return 0;
} 