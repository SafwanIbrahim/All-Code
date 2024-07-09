#include <bits/stdc++.h>
using namespace std;

void print(int n, int number,int i = 0)
{   
    if (n == 0) return;
    string s = to_string(number);
    cout << s[i] << " ";
    print(n-1,number,i+1);
}
int main()
{   
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;

        string s = to_string(n);

        int pass = s.length();

        print(pass,n);
        cout << endl;
    }
    return 0;
}