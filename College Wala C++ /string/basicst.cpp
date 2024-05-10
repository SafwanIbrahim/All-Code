#include <iostream>
using namespace std;
//#include <string>
int main()
{
    string x = "how are you";
    string y;
    //cin>>y;  // only take words before space;

    string s;
    getline(cin,s);
    //cout<<x;

    int a = s.length();
    int b = s.size();
    cout<<s<<endl<<a<<endl<<b;
}