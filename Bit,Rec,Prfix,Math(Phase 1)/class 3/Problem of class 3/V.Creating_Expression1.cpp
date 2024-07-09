 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;

int arr[25];

int target;

int flag = 0;

void ans(int index,int current_target = arr[0])
{   
    if (n == index)
    {   
        if (current_target == target)
        {
            flag = 1;
        }
        return;
    }
    ans(index+1,current_target+arr[index]);
    ans(index+1,current_target-arr[index]);
}

int main()
{   
    cin >> n >> target;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }    
    ans(1);
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
} 


