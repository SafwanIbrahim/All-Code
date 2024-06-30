 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print_even_indices(int arr[], int n)
{
    if (n == -2) return;
    cout << arr[n] << " ";
    print_even_indices(arr,n-2);

}
int main()
{   
    int n; cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n % 2 == 0) n--;

    print_even_indices(arr,n - 1);
    
    
    return 0;
} 


