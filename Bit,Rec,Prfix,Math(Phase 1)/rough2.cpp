#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << (*it) << '\n'; // Output: 1
    v.push_back(6); // all previous iterators are invalidated, we can no longer use them
    cout << (*it) << '\n'; // Output: -822411264 (undefined behavior, so it can be anything)

    
    return 0;
} 