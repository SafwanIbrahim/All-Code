#include <bits/stdc++.h>
using namespace std;

char s[105];

int main()
{
    cin.getline(s,105) ;    // only one line    // getline will take space as an input until is gets new line cp
    cout << sizeof(s) / sizeof(char);
    cout << s << endl;  
    cin.getline(s,105);  // two line
    cout << s << endl;
    return 0;
}