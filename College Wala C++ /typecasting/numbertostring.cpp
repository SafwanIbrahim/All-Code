#include <iostream>
using namespace std;
int main()
{
    int x= 3892123;

    string s=to_string(x);

    cout<<s.length()<<endl;

    int y = stoi(s);

    cout<<y+7;
}