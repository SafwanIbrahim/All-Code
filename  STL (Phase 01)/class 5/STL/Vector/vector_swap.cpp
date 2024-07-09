#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>a{1,3,4},b{9,89,31};

    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    swap(a,b);

    for(int i: a)
    {
        cout << i << " ";
    }
    
    return 0;
} 