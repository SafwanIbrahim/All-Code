#include<bits/stdc++.h>
using namespace std;

struct PriorityQueue { // max heap
  vector<int> v; // store the elements from highest to lowest

  void push(int x) { // O(n log(n))
    v.push_back(x);
    sort(v.begin(), v.end(), greater<int>());
  }

  void pop() { // remove the highest priority element, O(n)
    if (v.empty()) {
      cout << "The priority queue is empty! Can't pop!\n";
      return;
    }
    v.erase(v.begin());
  }

  int top() { // get the highest priority element, O(1)
    if (v.empty()) {
      cout << "The priority queue is empty! Can't get the top element!\n";
      return 0; // return 0 if no element
    }
    return v[0];
  }

  int size() { // O(1)
    return v.size();
  }

  bool empty() { // O(1)
    return v.empty();
  }
};

int32_t main() {
  PriorityQueue pq;
  pq.push(10);
  pq.push(30);
  pq.push(20);
  cout << pq.top() << '\n'; // Output: 30
  pq.pop();
  cout << pq.top() << '\n'; // Output: 20
  pq.pop();
  cout << pq.top() << '\n'; // Output: 10
  pq.pop();
  cout << pq.top() << '\n'; // Output: The priority queue is empty! Can't get the top element!
  pq.pop(); // Output: The priority queue is empty! Can't pop!
  return 0;
}