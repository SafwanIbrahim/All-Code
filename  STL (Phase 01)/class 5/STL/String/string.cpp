#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s(5,'s');

    cout << s << endl;

    s.push_back('a');
    s.push_back('a');

    cout << s << endl;

    s.pop_back();

    cout << s << endl;
    cout << s.empty() << endl;
    cout << s.size() << endl;

    cout << s.substr(3,3) << endl; // 3 denotes from where to start and 3 says how many to take; that means 3,4,5;
    cout << s.substr(4) << endl; // from 4 to rest of all
 
    int i = s.find('a'); // it will return first index that has char 'a';
    int i2 = s.find("sa"); // O(n^2) // from which index this substring started ;
    int i3 = s.rfind('s'); // it will return last occurance of s; // rfind = reverse find
    auto it = find(s.begin(),s.end(), " "); // it will return itaretor

    cout << i << endl;
    cout << i2 << endl;
    cout << i3 << endl;
    cout << s.find("DL") << endl; //  invalid 

    cout <<  s+"hi" << endl;  // concatinate 
     
    return 0;
} 