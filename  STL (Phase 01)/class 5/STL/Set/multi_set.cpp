#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    multiset<int> ms; // sorted but not unique eliment
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);

    for (multiset<int>::iterator i = ms.begin(); i!= ms.end(); i++)
    {
        cout << *i <<" ";
    }  
    cout << endl;

    ms.erase(ms.find(2)); // it will erase first two from this set; // O(logn)

    for (multiset<int>::iterator i = ms.begin(); i!= ms.end(); i++)
    {
        cout << *i <<" ";
    }  
    cout << endl;

    ms.erase(2); // it will remove every 2 from this set; // O(logn + k);

    for (multiset<int>::iterator i = ms.begin(); i!= ms.end(); i++)
    {
        cout << *i <<" ";
    }  
    cout << endl;

    
    return 0;
} 