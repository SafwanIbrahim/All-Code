#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    pair<int,int>point[4];
    int a,b;
    for (int i = 0; i < 4; i++)
    {       
        cin >> a >> b;
        point[i] = make_pair(a,b);
        
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout << point[i].first << " " << point[i].second << endl;
    }
    return 0;
} 