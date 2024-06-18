#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n)
{   
    if (n == 0) return;
    cout << "A";
    if (n % 2 == 1) cout << "C" << endl;
    else cout << "B" << endl;
    tower_of_hanoi(n-1);    
    tower_of_hanoi(n-1);
    return;
}
int main()
{       

    tower_of_hanoi(2);
    return 0;
} 