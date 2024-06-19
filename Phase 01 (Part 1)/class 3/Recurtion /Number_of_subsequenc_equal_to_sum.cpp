#include <bits/stdc++.h>
using namespace std;

int arr[21];
int n;
int target_sum;
int cnt;

void ans(int indx, int current_sum = 0)
{
    if (indx > n)
    {
        if (current_sum == target_sum) 
        {
            cnt++;
        }
        return;
    }

    ans(indx + 1,current_sum+arr[indx]);

    ans(indx + 1,current_sum);

}

int main()
{   
    cin >> target_sum >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    ans(1);

    cout << cnt << endl;

    return 0;
} 