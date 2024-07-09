#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void swapp(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x = 10, y = 5;
    swapp(x,y);
    cout << x << " " << y << endl; 
    
    return 0;
} 