#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'



void solve()
{
    int a,b,c; cin >> a >> b >> c;

    int check = b*b - 4*a*c;
    int ans_1 = 0;
    int ans_2 = 0;
    if (check > 0)
    {
       ans_1 = (-b + sqrt(check))/(2*a); 
       ans_2 = (-b - sqrt(check))/(2*a); 
       cout << "Two roots: " << min(ans_1,ans_2) << " " << max(ans_1,ans_2) << endl;
    }
    else if (check == 0)
    {
        ans_1 = -b / (2*a);
        cout << "One root: " << ans_1 << endl;
    }
    else
    {
        cout << "No roots" << endl;
    }
    return;


}
int main()
{   
    int t = 1;
    //cin >> t;    
    while(t--) solve(); 
    return 0;
} 


