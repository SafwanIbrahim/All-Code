#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int N = 1e5 + 7;
char arr[N];
int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> arr;
    for (char letter = 'a'; letter <= 'z'; letter++)
    {   
        bool not_found = true;
        for (int i = 0; i <strlen(arr); i++)
        {
            if (arr[i] == letter) not_found = false;
        }
        if(not_found)
        {
            cout << letter << endl;
            return 0;
        }
    }
    cout << "None\n";

    
    return 0;
} 