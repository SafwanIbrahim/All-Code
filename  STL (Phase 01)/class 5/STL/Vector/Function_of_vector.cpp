#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v{0,0,1,8,9,3,4};

    v.insert(v.begin()+5, 0);  // insert 0 in 5th index

    v.erase(v.begin()+0); // erase 0th index

    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    v.erase(v.begin()+1, v.begin()+3);  // it will erase from 1th index to (3-1)th index;

    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    } 
    
    return 0;
} 