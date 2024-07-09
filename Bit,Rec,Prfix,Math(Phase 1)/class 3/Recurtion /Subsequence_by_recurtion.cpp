#include <bits/stdc++.h>
using namespace std;

int n, arr[30];
bool is_taken[30];
// every rec has two rec call. 
void rec(int pos)  // for every base case (or for every return) it will print subsequnce ; so, it will call base case n^2 times
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