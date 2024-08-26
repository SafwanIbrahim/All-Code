#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x = 10;

    auto sum = [] (int a, int b) -> int { // we can access local variable by using lamda funtion
        return a+b;
    };

    auto get_sum = [=] (int a) -> int { // = means read only mood. so we cant change the value
        return a+x;
    };

    auto get_plus = [&] () -> int {  // & means capture by reference 
        return ++x;
    };

    cout << sum(5,8);
    cout << get_sum(5);
    get_plus();
    cout << x << endl;
    
    return 0;
} 