#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;



char arr[100];

int main()
{   

    int t; cin >> t;
    while(t--)
    {
        int s; cin >> s;
        cin >> arr;
        cout << s << " ";
        int len = strlen(arr);

        bool ase = next_permutation(arr+0,arr+len);
        if(ase)
        {
            for (int i = 0; i < len; i++)
            {
                cout << arr[i];
            }
            cout << endl;
        }
        else cout << "BIGGEST" << endl;

    }



    
    return 0;
} 