#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

double dis(int x, int y)
{
    return sqrt(x*x + y*y);
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<double,pair<int,int>>> v;
    for (int i = 1; i <= n; i++)
    {
        int x,y; cin >> x >> y;
        v.push_back(make_pair(dis(x,y),make_pair(x,y)));
    }
    sort(v.begin(),v.end());

    for (vector<pair<double,pair<int,int>>>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << (*i).second.first << " " << (*i).second.second << endl;
    }
    
    return 0;
} 