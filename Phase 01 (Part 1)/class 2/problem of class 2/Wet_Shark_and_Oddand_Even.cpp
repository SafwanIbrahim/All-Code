#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long sum = 0;
    int number_of_odd = 0;
    int lowest_odd_number = INT_MAX;

    for (int i = 0; i < n ; i++)
    {
        if(arr[i] % 2 == 1) 
        {
            number_of_odd ++;
            if (arr[i] < lowest_odd_number)
            {
                lowest_odd_number = arr[i];
            }
        }
        sum += arr[i];
    }
    if (number_of_odd % 2 == 1)
    {
        sum -= lowest_odd_number;
    }

    cout << sum << endl;

    return 0;
}