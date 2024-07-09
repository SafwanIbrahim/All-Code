#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[],int n)
{   
    int maxi = -11;
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i],maxi);
    }
    return maxi;
}
int minimum(int arr[],int n)
{   
    int mini = 110;
    for (int i = 0; i < n; i++)
    {
        mini = min(arr[i],mini);
    }
    return mini;
}

bool is_prime(int n)
{
    if (n == 1) return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int number_of_prime(int arr[],int n)
{
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if(is_prime(arr[i])) 
        {
            number++;
        }
    }
    return number;
}

int number_of_palindrom_number(int arr[], int n)
{
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        string s = to_string(arr[i]);
        bool is_pali = true;
        for (int a = 0, b = s.length()-1; a < b; a++,b--)
        {
            if (s[a] != s[b]) is_pali = false;
        }
        if (is_pali) number++;
    }
    return number;
}

int count_divisor(int n)
{   
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    return count;
}

int number_of_maximum_number(int arr[], int n)
{   
    int number = INT_MIN;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int divisor = count_divisor(arr[i]);
        if (divisor > maxi)
        {
            maxi = divisor;
            number = arr[i];
        }
        else if (divisor == maxi)
        {
            number = max(number,arr[i]);
        }
    }

    return number;
}


int main()
{   
    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The maximum number : " << maximum(arr,n) << endl;
    cout << "The minimum number : " << minimum(arr,n) << endl;
    cout << "The number of prime numbers : " << number_of_prime(arr, n) << endl;
    cout << "The number of palindrome numbers : " << number_of_palindrom_number(arr,n) << endl;
    cout << "The number that has the maximum number of divisors : " << number_of_maximum_number(arr,n) << endl;
    return 0;
}