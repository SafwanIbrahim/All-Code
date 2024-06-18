#include <bits/stdc++.h>

using namespace std;

int check_kth_bit (int x , int k)
{
    return ( x >> k ) & 1;
}
int count_on_bit(int x)
{
    int count = 0;
    for (int i = 0; i <= 31; i++)
    {
        if (check_kth_bit(x,i)== 1) 
        {
            count++;
        }
    }
    return count;
}

int  bit_turn_on(int x , int n)
{
    return (1 << n) | x;
}

int  bit_turn_off(int x , int n)
{
    return (~(1 << n)) & x;
}
int  bit_change(int x , int n)
{
    return (1 << n) ^ x;
}
bool power_of_2 (int x)
{
    if (count_on_bit(x) == 1) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{   
    int x = 8;
    int y = 10;

    cout<<bit_turn_on(x,1)<<endl;
  
    cout<<bit_turn_off(y,1)<<endl;

    cout << bit_change(10,1)<<endl;

    cout << bit_change(8,1)<<endl;

    cout << power_of_2(31);


}