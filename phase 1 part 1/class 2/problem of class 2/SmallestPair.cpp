#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t;  cin >> t;

    while (t--)
    {
        int n; cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int smallest_pair = INT_MAX;

        for (int i = 0 ; i < n ; i++)
        {   
            for (int j = i+1; j < n; j++)
            {
                int small_pair_so_far = arr[i]+arr[j]+j-i;

                smallest_pair = min(small_pair_so_far,smallest_pair);

            }
        }
        cout << smallest_pair << endl;

    }
}