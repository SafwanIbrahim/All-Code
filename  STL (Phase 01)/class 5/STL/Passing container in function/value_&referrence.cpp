#include<bits/stdc++.h>
using namespace std;

int get_index_1(vector<int> v, int i) { // pass by value, O(n) as the whole vector is copied
  return v[i];
}

int get_index_2(vector<int> &v, int i) { // pass by reference, O(1) as the vector from the main function is used
  return v[i];
}

int32_t main() {
  int n = 1e6;
  vector<int> v(n, 2);
  int sum1 = 0;
  for (int i = 0; i < n; i++) { // total time complexity: O(n^2), so 10^12 operations ~ 10000 seconds
    sum1 += get_index_1(v, i);
  }
  cout << sum1 << '\n';

  int sum2 = 0;
  for (int i = 0; i < n; i++) { // total time complexity: O(n), so 10^6 operations ~ 0.01 seconds
    sum2 += get_index_2(v, i);
  }
  cout << sum2 << '\n';
  return 0;
}