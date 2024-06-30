#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int fact[10];
    fact[0] = 1;
    for (int i = 1; i < 10; i++)
    {
        fact[i] = i * fact[i-1];
    }
    int sum = 0;
    int n; cin >> n;
    for (int i = 10; i <= n; i++)
    {   
        int sum_of_fact = 0;
        int stored_i = i;
        int number = i;
        while(number > 0)
        {   

            int digit = number%10;
            sum_of_fact += fact[digit];
            number = number / 10;
        }
        if (sum_of_fact % stored_i == 0)
        {
            sum += stored_i;
        }
    }
    cout << sum << endl;
    return 0;
}