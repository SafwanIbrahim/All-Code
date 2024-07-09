#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void print(set<int>s) {
    for (set<int>::iterator i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<int> s; // sorted unique eliments    // there is no indexing in set // iterator bidirectional

    s.insert(12); // O(logn)
    s.insert(2);
    s.insert(100);
    s.insert(50);
    s.insert(12);
    s.insert(1);

    print(s);

    s.erase(12); // erase by number O(logn)
    s.erase(s.begin()); // erese by iteretor // O(1)

    set<int>::iterator it = s.find(50); // it will return iterator of 50; if 50 exists else s.end();
    cout << *it << endl;
    print(s);

    cout << s.count(12) << endl; // it will return 0 or 1

    set<int>::iterator i = s.lower_bound(47); // it will return the itrtr of this eliment whose value is at least 47 or greater
    // if it find 47 it will return the iterator of first eliment which has value 47 else it will return greater 
    set<int>::iterator i2 = s.lower_bound(47); // it will return the itrtr of this eliment whose value is strictly greater than 47
    // if we don't find eliment then upper_bound and lower_bound is same 
    // complexity O(log n)

    cout << *i << endl << *i2 << endl;



    
    return 0;
} 