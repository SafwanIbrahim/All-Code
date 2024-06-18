#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;

    char s[55];

    cin >> s;

    int len = strlen(s);

    int sum = 0;

    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == s[i+1])
        {
            sum ++;
        }
    }
    cout << sum << endl;
    
    return 0;
}