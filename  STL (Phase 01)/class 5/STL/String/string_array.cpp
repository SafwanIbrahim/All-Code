#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s[10];
    for (int i = 0; i < 10; i++) 
    {
        s[i] = "hi";
    }

    for (int i = 0; i < 10; i++)
    {
        cout << s[i]+"! how" << endl; // you can concatinate two string; but can't to like this : "hl" + "ju"; 
    }

    cout << s[6]+"! hello" << endl; 
    string a = "something"; 
    string b = " plus";
    cout << a+b << endl;  // basicaly it append string but doesn't add like : string + string;
    
    return 0;
} 