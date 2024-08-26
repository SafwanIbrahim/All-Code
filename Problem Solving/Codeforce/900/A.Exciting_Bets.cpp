#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        ll a,b; cin >> a >> b;
        ll small = min(a,b);
        ll difference = abs(a-b);
        ll move = 0;
        // this method works good but there is another easy method 

        // if (difference != 0) {
        //     ll move_1 = small - small / difference * difference; 
        //     ll move_2 = (difference + small - 1) / difference * difference - small;
        //     move = min(move_1,move_2);
        // }

        // method 2 :

        if (difference != 0) {
            move = min(small % difference, difference - small % difference);
        }
        cout << difference << " " << move << endl;
    }
    return 0;
}