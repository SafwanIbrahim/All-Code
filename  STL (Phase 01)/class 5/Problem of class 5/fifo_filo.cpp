#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        if (s == "FIFO") {
            queue<int>q;
            while(n--) {
                string a; cin >> a;
                stringstream ss(a); 
                if(a == "IN") {
                    int need; cin >> need;
                    q.push(need);
                }
                else {
                    if (a == "OUT") {
                        if (q.empty()) {
                            cout << "None\n";
                        }
                        else {
                            cout << q.front() << endl;
                            q.pop();
                        }    
                    }
                }
            }
        }
        else {
            stack<int>q;
            while(n--) {
                string a; cin >> a;
                stringstream ss(a);
                if(a == "IN") {
                    int need; cin >> need;
                    q.push(need);
                }
                else {
                    if (a == "OUT") {
                        if (q.empty()) {
                            cout << "None\n";
                        }
                        else {
                            cout << q.top() << endl;
                            q.pop();
                        }  
                    }
                }
            }
        }
    }
    return 0;
}