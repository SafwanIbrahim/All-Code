#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    vector<int>v;

    v.assign(5,98);

    for (int x : v)
    {
        cout << x << " "; 
    }

    cout << endl;

    v.resize(7); // it will assinged not assigned eliment as 0

    for (int x : v) 
    {
        cout << x << " ";
    }

    cout << endl;

    v.resize(9,7); // it will assinged not assigned eliment as 7;

    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    v.clear();

    cout << v.empty() << endl; // it will return bool
    
    return 0;
} 