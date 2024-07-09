#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int>pq; // maximum eliment has most most priority 
    pq.push(2); // O(log n)
    pq.push(23);
    pq.push(267);
    pq.push(-1);
    cout << pq.top() << endl;    // O(1)
    pq.pop(); // O(log n)
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> pq2; // minimum eliment has most priority

    pq2.push(90);
    pq2.push(3);
    pq2.push(12);

    cout << pq2.top() << endl; 

    return 0;
} 