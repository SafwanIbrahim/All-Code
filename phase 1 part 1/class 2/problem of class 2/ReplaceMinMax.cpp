#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mini = INT_MAX;
    int maxi = INT_MIN;
    int min_index = -1;
    int max_index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi) 
        {
            maxi = arr[i];
            max_index = i;
        }
        if (arr[i] < mini) 
        {
            mini = arr[i];
            min_index = i;
        }
    }

    arr[min_index] = maxi;
    arr[max_index] = mini;
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;



    return 0;
}