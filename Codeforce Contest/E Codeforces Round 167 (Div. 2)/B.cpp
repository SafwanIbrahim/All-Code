#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    char st[105],sq[105];
    cin >> st >> sq;
    int len_st = 0;
    int i = 0;
    while(st[i]!='\0')
    {
        len_st++;
        i++;
    }
    i = 0;
    int len_sq = 0;
    while(sq[i]!='\0')
    {
        len_sq++;
        i++;
    }
    int ans = len_st+len_sq;
    int minimize = 0;
    for (int i = 0; i < len_sq; i++)
    {   
        int count = 0;
        int pointer = i;
        for (int j = 0; pointer < len_sq ,j < len_st; j++)
        {
            if (sq[pointer] == st[j])
            {
                pointer++;
                count++;
            }
        }
        minimize = max(count,minimize);
    }

    cout << ans-minimize << endl;

}

int main()
{   
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 

