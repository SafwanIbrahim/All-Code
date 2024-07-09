#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    bitset<20>b; // it can be string // string must be in binary
    bitset<10>bs("10101011");
    b = 19;
    cout << b[0] << endl;
    cout << bs << endl;
    cout << b << endl;

    b.flip();
    cout << b << endl;
    b.set(); // if i give index then it will set that index only
    cout << b << endl;
    b.reset();
    cout << b << endl;
    b = 133;

    cout << b << endl;
    cout << b.count() << endl; // how many bits are set
    cout << b.any() << endl; // it will return true if there exist at least one set bit;
    cout << b.none() << endl; // it will return true if no bit is set;
    cout << b.all() << endl; // it will return true if all bit are set;
    
    return 0;
}  