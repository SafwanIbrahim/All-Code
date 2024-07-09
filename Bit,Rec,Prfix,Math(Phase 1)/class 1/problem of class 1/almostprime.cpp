#include <iostream>
using namespace std;

int main()
{
    int n , nd=0;
    cin >> n;

    for (int i = 1 ; i <= n; i++)
    {   
        int check = 0;
        for (int j = 1; j<= i; j++)
        {
            if (i%j == 0) 
            {
                int red = 0;
                for (int k = 1; k <= j ;k++)
                {
                    if (j%k == 0)
                    {
                        red += 1;
                    }
                }
                if (red == 2) 
                {
                    check++;
                }
            }
        }
        if (check == 2)
        {   
            nd++;
        }
    }
    cout<<nd;


    return 0;
}