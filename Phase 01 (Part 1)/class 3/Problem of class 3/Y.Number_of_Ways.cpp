#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int stair_ways(int start,int ending)
{   
    int distance = ending - start;
    if (!distance) return 1;
    if (distance < 3) return distance;
    if (distance == 3) return 4;
    return stair_ways(start+1,ending) + stair_ways(start+2,ending) + stair_ways(start+3,ending);

}

int main()
{   
    int s,e; cin >> s >> e;

    cout << stair_ways(s,e) << endl; 
    
    return 0;
} 

