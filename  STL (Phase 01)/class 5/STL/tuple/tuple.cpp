#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tuple<int , ll , char, double>p;
    p = make_tuple(2,87098098798098,'s',98.980);
    cout << get<0>(p) << endl;
    
    return 0;
} 