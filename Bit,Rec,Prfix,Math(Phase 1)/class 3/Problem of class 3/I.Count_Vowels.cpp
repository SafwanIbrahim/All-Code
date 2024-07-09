#include <bits/stdc++.h>
using namespace std;

bool is_vowel (char c)
{   
    char ch = tolower(c); 
    if (ch == 'a' or ch == 'i' or ch == 'o' or ch == 'e' or ch == 'u')
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int vowel (string s,int len,int i = 0)
{
    if (len == i) return 0;
    return is_vowel(s[i]) + vowel(s,len,i+1);

}
int main()
{
    char s[205];
    cin.getline(s,205);
    int len = strlen(s);
    cout << vowel(s,len) << endl;
    return 0;
}