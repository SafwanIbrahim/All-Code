#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 7;
    int b = 6;
    int m = 5;

    // Property: (a + b) mod m = ((a mod m) + (b mod m)) mod m
    int result1 = (a + b) % m;
    int result2 = ((a % m) + (b % m)) % m;
    cout << "(a + b) mod m = " << result1 << endl;
    cout << "((a mod m) + (b mod m)) mod m = " << result2 << endl;

    // Property: (a - b) mod m = ((a mod m) - (b mod m) + m) mod m
    int result3 = (a - b) % m;
    int result4 = ((a % m) - (b % m) + m) % m;
    cout << "(a - b) mod m = " << result3 << endl;
    cout << "((a mod m) - (b mod m) + m) mod m = " << result4 << endl;

    // Property: (a * b) mod m = ((a mod m) * (b mod m)) mod m
    int result5 = (a * b) % m;
    int result6 = ((a % m) * (b % m)) % m;
    cout << "(a * b) mod m = " << result5 << endl;
    cout << "((a mod m) * (b mod m)) mod m = " << result6 << endl;

    int c, d;
    // a * b * c * d mod m = (((a * b) mod m) * c mod m) * d mod m
    a = 1e9 - 3; b = 1e9 - 1; c = 1e9 - 2; d = 1e9 - 3; m = 1e9 + 7;
    int result7 = (a * b * c * d) % m; // overflow
    int result8 = (((a * b) % m) * c % m) * d % m; // still overflow
    int result9 = (((1LL * a * b) % m) * c % m) * d % m; // no overflow
    cout << "(a * b * c * d) mod m = " << result7 << ' ' << result8 << ' ' << result9 << endl;

    // a - 3 * b mod m = (a mod m - (3 * b) mod m + m) mod m
    cout << "(a - 3 * b) mod m = " << (a - 3LL * b % m + m) % m << endl;

    // find n! mod m
    int n = 100;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (1LL * fact * i) % m;
    }
    cout << n << "! mod m = " << fact << endl;

    // find a^b mod m
    b = 100;
    int power = 1;
    for (int i = 1; i <= b; i++) {
        power = (1LL * power * a) % m;
    }
    cout << a << "^" << b << " mod m = " << power << endl;
    return 0;
}