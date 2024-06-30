 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,w;

int weight[25],value[25];

int maxi;

void ans(int index,int sum_of_w = 0, int sum_of_v = 0)
{   
    if (n == index)
    {
        if (sum_of_w <= w)
        {
            maxi = max(maxi,sum_of_v);
        }
        return;
    }
    ans(index+1,sum_of_w+weight[index],sum_of_v+value[index]);
    ans(index+1,sum_of_w,sum_of_v);
}

int main()
{   
    cin >> n >> w;

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        cin >> value[i];
    }    
    ans(0);
    cout << maxi << endl;
    return 0;
} 


