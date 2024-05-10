#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    string s=to_string(x);

    int l=4-s.length();

    for (int i = 1; i<=l; i++) 
    {
        cout<<0;
    }
    cout<<x;
    return 0;


}