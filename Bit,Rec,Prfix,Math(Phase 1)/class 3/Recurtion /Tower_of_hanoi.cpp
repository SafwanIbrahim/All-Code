#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n)
{   
    if (n == 0) return;
    tower_of_hanoi(n-1);
    tower_of_hanoi(n-1);
    cout << n << endl;
    return;
}
int main()
{       

    tower_of_hanoi(2);
    return 0;
}