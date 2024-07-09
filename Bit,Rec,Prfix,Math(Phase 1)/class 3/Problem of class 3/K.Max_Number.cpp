 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxi(int arr[],int n,int i = 0)
{
    if (i == n) return INT_MIN; 
    return max((maxi(arr,n,i+1)),arr[i]);
}

int main()
{   
    int n; cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxi(arr,n) << endl;
    
    
    return 0;
} 


