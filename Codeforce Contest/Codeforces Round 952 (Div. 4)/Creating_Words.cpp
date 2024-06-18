#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t ; cin >> t;

    while (t--)
    {   
        char s1[4], s2[4];

        cin >> s1;
        cin >> s2;

        char tmp = s1[0];
        s1[0] = s2[0];
        s2[0] = tmp;

        cout << s1 << " " << s2 << endl;
  
    }
    return 0;
}