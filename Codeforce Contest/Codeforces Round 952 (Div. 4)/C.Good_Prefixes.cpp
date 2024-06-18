#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long maxi = -100;

        long long sum = 0;

        int count = 0;


        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            maxi = max((long long) arr[i],maxi);

            if (sum - maxi == maxi)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}