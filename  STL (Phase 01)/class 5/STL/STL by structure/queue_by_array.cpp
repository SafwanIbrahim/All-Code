
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
struct Queue {
  int a[N];
  int start = 1, end = 0;

  void push(int x) { // O(1)
    a[++end] = x;
  }

  void pop() { // O(1)
    if (start > end) {
      cout << "The queue is empty! Can't pop!\n";
      return;
    }
    start++;
  }

  int front() { // O(1)
    if (start > end) {
      cout << "The queue is empty! Can't get the front element!\n";
      return 0;
    }
    return a[start];
  }

  int back() { // O(1)
    if (start > end) {
      cout << "The queue is empty! Can't get the back element!\n";
      return 0;
    }
    return a[end];
  }

  int size() { // O(1)
    return end - start + 1;
  }

  bool empty() { // O(1)
    return start > end;
  }
};

int32_t main() {
  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  cout << q.front() << '\n'; // Output: 10
  cout << q.back() << '\n'; // Output: 30
  q.pop();
  cout << q.front() << '\n'; // Output: 20
  cout << q.back() << '\n'; // Output: 30
  q.pop();
  cout << q.front() << '\n'; // Output: 30
  cout << q.back() << '\n'; // Output: 30
  q.pop();
  cout << q.front() << '\n'; // Output: The queue is empty! Can't get the front element!
  cout << q.back() << '\n'; // Output: The queue is empty! Can't get the back element!
  q.pop(); // Output: The queue is empty! Can't pop!
  return 0;
}
