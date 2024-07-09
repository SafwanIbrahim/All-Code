#include<bits/stdc++.h>
using namespace std;

struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};
 //unordered_map<long long int, int, custom_hash> mp;// this will work when the key is an int or long long int

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<long long int, int, custom_hash> mp;
    mp[3] = 2;
    mp[5] = 2;
    mp[2] = 1;
    mp[23] = 1;
    mp[1] = 2;
    for (auto x: mp) {
            cout << x.first << ' ' << x.second << '\n';
    } // the order of the keys may vary and may not be sorted


    // input:
    // 7
    // 5 3 2 2 4 5 5
    // find the maximum frequency of any element
    // Solve it in O(n) time complexity
    unordered_map<int, int> cnt;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        cnt[x]++;
    }
    int ans = 0;
    for (auto [element, count]: cnt) {
        ans = max(ans, count);
    }
    cout << ans << '\n';
    // Note that, if you use a map instead of an unordered map, the time complexity will be O(n log n)
    // Also, using an array is also not possible if the elements can be very large (like 10^9) as the array size will be very large
    return 0;
}