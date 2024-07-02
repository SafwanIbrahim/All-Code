#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char s[11] = "ansklmsnh";
    memset(s,'i',10); // it works byte by byte . every char is one byte;
    cout << s << endl;

    int arr[11];
    memset(arr,(0),11 * 4); // int er size 4 byte so 4 diye gun; // or we cal use sizeof(a);
    //memset(arr,0,sizeof(arr));
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    } 
    
    return 0;
} 