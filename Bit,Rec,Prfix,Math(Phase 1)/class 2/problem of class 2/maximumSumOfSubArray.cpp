#include <bits/stdc++.h>
using namespace std;

int main ()
{   
    int n ; cin >> n;   
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    long long  sum = -1e15;     // 1 , 3 , 3 , 9 , 9 , 11

    long long sum_at_index = -1e15; // 1 , 3 , 1 , 9 , 6 , 11

    for (int left = 0; left < n ; left++)
    {   
        sum_at_index = max((long long) arr[left], arr[left]+sum_at_index); // every time sum_at_index will be either last index or last index + presvious sum_at_indnex // so will get continuous part everytime

        sum = max(sum, sum_at_index);


        // for (int right = left; right < n; right++)
        // {   

        //     tempsum += arr[right];
        //     sum = max(sum,tempsum);
        //     // long long tempsum = 0;
        //     // for (int i = left; i <= right; i++ )
        //     // {
        //     //     tempsum+=arr[i];
        //     // }
        //     // sum = max(sum,tempsum);
        // }
    }
    cout << sum;

    return 0;
}