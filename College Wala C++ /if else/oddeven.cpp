#include <iostream>
using namespace std;

int main ()
{   
    int x;
    cin>>x;
    if (x%2==0  and x!=0)   //  ( or = || )  (and = && )
    {
        cout<<"even";
    }
    else if (x%2 == 1)
    {
        cout<<"oodd";
    }
}   