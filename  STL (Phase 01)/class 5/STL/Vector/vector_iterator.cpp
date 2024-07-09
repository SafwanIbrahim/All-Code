#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>vc; // or we could declare this by using vector<int>vc({134,23,19})
    vc.push_back(134);
    vc.push_back(23);
    vc.push_back(19);

    cout << vc[0] << " ";

    vector<int>::iterator i;
    i = vc.begin();
    i = next(i); // it will point the  index
    cout << &i << endl;
    cout << *i << endl;

    vector<int>::iterator i_2; // auto i_2 = vc.begin(); we can declare an iterator by using auto     
    i_2 = vc.end(); // end will pointer last index+1; // to get the last index value we need to --iterator
    i_2--;
    
    // or we can declare it --vc.end();

    // we can subtract (minus) iterator to see diffence 
    cout << *i_2 << endl;

    i_2 = prev(i_2);

    cout << *i_2 << endl;


    
    return 0;
} 