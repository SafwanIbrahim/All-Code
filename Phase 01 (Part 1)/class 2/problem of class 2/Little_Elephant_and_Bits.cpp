#include <bits/stdc++.h>
using namespace std;

int main()
{
    char number_string[1000000]; cin >> number_string ;

    int len = strlen(number_string);

    int index_of_0 = 1000000;

    for (int i = 0; i < len ; i++)
    {
        if (number_string[i] == '0')
        {
            index_of_0 = i;
            break;
        }
    }

    if (index_of_0 > len) len--; 
    
    for (int i = 0; i < len; i++)
    {   
        if (i == index_of_0) continue;
        cout << number_string[i];
    }
    cout << endl;

    
}