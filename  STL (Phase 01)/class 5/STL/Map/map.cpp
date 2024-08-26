#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    map<int,string>mp; // key will be sorted // it has iterator // we can access by key never by value

    mp = {{3,"safwan"},{1,"nahian"},{2,"marzan"}};
    mp[-1] = "aiman";
    mp[598345403] = "amma";

    for (map<int,string>::iterator i = mp.begin(); i != mp.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
    cout << endl;

    cout << mp[2] << endl; // O(logn)
    cout << mp[10] << endl; // it will print nothing

    auto it = mp.begin();
    it++;
    cout << (*it).second << endl;

    return 0;
} 