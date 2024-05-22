#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t ; cin >> t;

    while (t--)
    {
        int n ; cin >> n;

        int arr[n]; // [1,4,5,6]

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {   
                int maxi = INT_MIN; 

                for (int k = i; k <= j; k++ )
                {
                    if (arr[k] > maxi)
                    {
                        maxi = arr[k];
                    }
                }
                cout << maxi << " ";
            }
        }
        cout << endl;
    }
    return 0;
}