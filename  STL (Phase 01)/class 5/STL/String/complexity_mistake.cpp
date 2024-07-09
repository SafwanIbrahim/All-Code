#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "hi how are you";
    //s = s + '?'; // complexity O(n); //  it will concatinate 
    s += '?'; // complexity O(1); wow just insane // it will append; boom!

    cout << s << endl;
    
    return 0;
} 