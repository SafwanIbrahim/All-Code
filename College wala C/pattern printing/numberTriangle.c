#include <stdio.h>

int main ()
{   
    int z = 0;

    for (int x = 1; x <= 4 ; x++)
    {
        if (x %2 == 1)
        {
            z = 1;
        }
        else
        {
            z = 0;
        }

        for (int y = 1 ; y <= x ; y++)
        {

            printf("%d",z);

            if (z == 1)
            {
                z = 0;
            }
            else if (z == 0)
            {
                z = 1;
            }
        }
        printf("\n");
    }

}