#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    pair<int, double> a;
    a = make_pair(9,4.5); // we can use a = {9,4.5};
    auto [n,m] = a;
    cout << a.first << " " << a.second << endl;
    cout << n << " " << m << endl;
    
    pair<pair<int,int>,int> p;
    p = make_pair(make_pair(9,6),3);

    auto x = p.first.first, y = p.first.second, z = p.second; // auto will automatically detect data type
    
    cout << x << " " << y << " " << z << endl; 
    
    return 0;
} 