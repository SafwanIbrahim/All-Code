 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check_kth_bit(int n, int k)
{
    return (n >> k) & 1;
}
int main()
{       
    int n; cin >> n;
    if ((n & 1 )== 0) 
    {
        cout <<"NO"<<endl;
        return 0;
    }
    else 
    {   
        int len = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (check_kth_bit(n,i)) 
            {
                len = i;
                break;
            }
        }
        for (int i = 0,j = len; i<j ; i++,j--)
        {
            if (check_kth_bit(n,i) != check_kth_bit(n,j))
            {
                cout <<"NO"<<endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    
    
    return 0;
} 


