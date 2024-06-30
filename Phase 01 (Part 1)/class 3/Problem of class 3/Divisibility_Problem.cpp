#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int t; cin >> t;

    while(t--)
    {
        int a,b; cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
            
        }
        else
        {
            int destination = b - a%b;
            cout << destination << endl;
        }
    }
    
    
    return 0;
} 

