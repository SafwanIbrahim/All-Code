#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[101];
    // after taking integer n it will take a will consider space as first line so it will run n-1 times

    // to ignore it we will use getchar() or cin.ignore()

    // method 1 :

    // char c;

    // c= getchar();       // it will take newline as an input



    // method 2 :

    cin.ignore();  // it will ignore next char after input n;



    for (int i = 1; i <= n ; i++)   
    {
        cin.getline(s,101);
        cout<< s;
    }
    return 0;
    
}