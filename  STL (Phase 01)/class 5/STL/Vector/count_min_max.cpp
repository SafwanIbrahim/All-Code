#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vc{1,-23,4,5,6,-23,4,3};

    cout << count(vc.begin(),vc.end(),5) << endl;

    // find the minimum eliment of vector . it will return iterator of first minimum value 

    vector<int>::iterator i = min_element(vc.begin(),vc.end()); // we can use auto to declare this iterator

    cout << "this eliment is " << *i << endl; // to get the value

    cout << "index of minimum value" << i - vc.begin() << endl; // it will return the index of minimum value of first occurance
   
    return 0;
}