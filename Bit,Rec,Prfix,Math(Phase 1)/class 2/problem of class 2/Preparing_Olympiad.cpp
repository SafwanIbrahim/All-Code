#include <bits/stdc++.h>
using namespace std;

int check_kth_bit(int n, int k)
{
    return ((n >> k) & 1);
}

int main()
{   
    int n,l,r,x; cin >> n >> l >> r >> x;

    int arr[n];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < (1 << n); i++)
    {   
        //int res_array[20];
        // int indx = 0;
        // int len = 0;

        int sum = 0;
        int maxi = -100;
        int mini = 1e7;
        for (int bit = 0; bit < n; bit++)
        {
            if (check_kth_bit(i,bit))
            {
                // res_array[indx] = arr[bit];
                // indx++;
                // len = indx;
                sum += arr[bit];
                maxi = max(arr[bit], maxi);
                mini = min(arr[bit],mini);               
            }
        }
        // if (len < 2) continue;

        // int mini = 1e7;
        // int maxi = -100;
        // int sum = 0;

        // for (int j = 0; j < len; j++)
        // {
        //     maxi = max(res_array[j],maxi);
        //     mini = min(res_array[j],mini);
        //     sum += res_array[j];
        // }
        // cout << maxi << " " << mini << " " << sum <<endl;
        if (maxi - mini >= x && sum >= l && sum <= r)
        {
            count++;
        }
    }
      
    cout << count << endl;
    
    return 0;
}