#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;

    cin >> n;

    int arr[n];
    for (int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int operation = 0; operation < n-1; operation++)
    {   
        for (int in = 0; in < n-1; in++)
        {
            if (arr[in] > arr[in+1])
            {
                int tmp = arr[in];
                arr[in] = arr[in+1];
                arr[in+1] = tmp;
            }
        }    
    }

    for (int i = 0 ; i < n; i++)
    {
        cout << arr[i] << " ";
    }




    return 0;
}