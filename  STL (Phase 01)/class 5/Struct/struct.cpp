#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

struct Person
{
    string name;
    int age;
    int rating;

    Person() // default
    {
        name = "N/A";
        age = 0;
        rating = 0;
    }

    Person(string _name , int _age, int _rating)
    {
        name = _name;
        age = _age;
        rating = _rating;
    }

    void print()
    {
        cout << "name : " << name << endl << "age : " << age << endl << "rating : " << rating << endl;
    }

};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Person one = Person("safwan",21,925);
    Person two;
    cout << one.age << endl;
    cout << two.age << endl;
    one.print();

    return 0;
} 