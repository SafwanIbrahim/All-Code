 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_equal(int n, int m)
{
    if (n == m) return true;
    return false;
}

void is_palindrom(int arr[],int n, int j,int i = 0, int s = 0)
{
    if (i >= j)
    {   
        if (n / 2 == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return;
    }
    int check = is_equal(arr[i],arr[j]);
    is_palindrom(arr,n,j-1,i+1,s+check);
}

int main()
{   
    int n; cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    is_palindrom(arr,n,n-1);

    
    return 0;
} 


