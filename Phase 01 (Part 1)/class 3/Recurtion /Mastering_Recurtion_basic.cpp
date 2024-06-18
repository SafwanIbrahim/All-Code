#include <bits/stdc++.h>
using namespace std;


void pre_in_post(int n)
{
    if (n == 0) return ;
    cout << "Pre : " << n << endl;
    pre_in_post(n-1);
    cout << "In : " << n << endl;
    pre_in_post(n-1);
    cout << "Post : " << n << endl;
}
void pre_in_post2(int n)
{
    if (n == 0) return ;
    cout << n;
    pre_in_post2(n-1);
    cout << n;
    pre_in_post2(n-1);
    cout << n;
}

int optimized_maze(int er,int ec)
{
    if (er == 1 || ec == 1) return 1;
    return optimized_maze(er-1,ec) + optimized_maze(er,ec-1);
}

int maze(int er, int ec, int cr = 1, int cc = 1) // e = ending c = current r/c = row/column
{   
    if (cr == er || cc == ec) return 1;
    return maze(er,ec,cr+1,cc) + maze(er,ec,cr,cc+1);
}

int optimized_power(int a, int b)
{        
    if (b == 0) return 1;
    int x = optimized_power(a,b/2);
    if(b % 2 == 0) return x * x;
    else return x * x * a;
}

int power(int a, int b)
{   
    if (b == 0) return 1;
    return a * power(a,b-1);
}

void sum_print(int n, int s = 0)
{   
    if (n == 0)
    { 
        cout << s <<endl;
        return;
    }
    s += n;
    sum_print(n-1,s);
}

int sum(int n)
{   
    if (n == 0) return n;  // this is called base case 
    return sum(n-1) + n;
}

void count_down (int n)
{
    if (n == 0) return ;  
    cout << n << endl;
    count_down(n-1);
    cout << n << endl;
}

int factorial (int n)
{
    if (n == 0) return 1;
    return factorial(n - 1) * n;
}

int fibo(int n)
{
    if (n == 1 || n == 0) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int power_of_two(int n)
{
    if (n == 0) return 1;
    return power_of_two(n-1) + power_of_two(n-1);
}

int main()
{   
    cout << sum(100) << endl;    
    count_down(10);
    cout << factorial(5) << endl;
    cout << fibo(7) << endl;
    cout << power_of_two(7) << endl;
    sum_print(100);
    cout << power(4,5) << endl;
    cout << pow(4,5) << endl;
    cout << optimized_power(4,5) << endl;
    cout << maze(3,3) << endl;
    cout << maze(2,2) << endl;
    cout << maze(4,4) << endl;
    cout << maze(2,3) << endl;
    cout << optimized_maze(4,4) << endl;
    pre_in_post(1);
    pre_in_post2(3);
    return 0;
}
