#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << &a[i] << '\n'; // consecutive memory locations each of size 4 bytes
    }
    int* ptr; // Declaration of a pointer that can store the address of an integer variable
    ptr = a; // Storing the address of the first element of 'a' in 'ptr'
    int* ptr2 = &a[0]; // Initialization of the pointer with the address of the first element of 'a', same as above

    cout << *(ptr + 3) << '\n'; // Output: 4 (value at the memory location pointed by 'ptr + 3'

    ptr++; // Incrementing the pointer to point to the next element

    cout << *ptr << '\n'; // Output: 2 (value at the updated memory location pointed by 'ptr')

    ptr = ptr - 1; // Decrementing the pointer to point to the previous element
    cout << *ptr << '\n'; // Output: 1 (value at the updated memory location pointed by 'ptr')

    *ptr = *ptr + 5; // Incrementing the value at the memory location pointed by 'ptr' by 5
    cout << *ptr << '\n'; // Output: 6 (value at the updated memory location pointed by 'ptr')

    cout << ptr[4] << '\n'; // Output: 5 (same as *(ptr + 4), value at the memory location pointed by 'ptr + 4')

  return 0;
}