#include <bits/stdc++.h>
using namespace std;

int n, arr[200];
bool is_taken[200];

void rec(int pos)
{
    if (pos > n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (is_taken[i])
            {
                cout << arr[i] <<" ";
            }
        }
        cout << endl;   
    return;
    }
    
    is_taken[pos] = false;
    rec(pos+1);

    is_taken[pos] = true;
    rec(pos+1); 

}
int main()
{   
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    rec(1);
    return 0;
}