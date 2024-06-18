#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;  // n = 10 // m = 5 
    int arr[n+1];

    for (int i = 1; i <= n; i++)  // 4 2 3 4 5 3 2 1 5 9
    {
        cin >> arr[i];
    }

    int fr[m+1];

    for (int i = 1; i <= m; i++) // 0 0 0 0 0 
    {
        fr[i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {   
        int indx;
        indx = arr[i];      // arr[i] ir maje joto faimu oto tomo index or man 1 baraidimu frequency th;
        fr[indx]++;         // jodi arr[1] = 4 //  4 tomo index or man 1 barbo;
    }

    for (int i = 1; i <= m; i++)
    {
        cout << fr[i] << endl;
    }
    
}