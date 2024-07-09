#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    vector<int>v;
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    
    // we can print it in two way;

    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    
    cout << endl;

    for (int x : v)
    {
        cout << x << " "; 
    }
    return 0;
} 