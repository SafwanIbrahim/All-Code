#include<bits/stdc++.h>
using namespace std;

struct Stack {
  vector<int> v;

  void push(int x) { // O(1)
    v.push_back(x);
  }

  void pop() { // O(1)
    if (v.empty()) {
      cout << "The stack is empty! Can't pop!\n";
      return;
    }
    v.pop_back();
  }

  int top() { // O(1)
    if (v.empty()) {
      cout << "The stack is empty! Can't get the top element!\n";
      return 0;
    }
    return v.back();
  }

  int size() { // O(1)
    return v.size();
  }

  bool empty() { // O(1)
    return v.empty();
  }
};

int32_t main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << '\n'; // Output: 30
    s.pop();
    cout << s.top() << '\n'; // Output: 20
    s.pop();
    cout << s.top() << '\n'; // Output: 10
    s.pop();
    cout << s.top() << '\n'; // Output: The stack is empty! Can't get the top element!
    s.pop(); // Output: The stack is empty! Can't pop!
    return 0;
}