#include <stdio.h>
 
int main()
{    
    int t;
    scanf("%d",&t);
    for (int i= 1; i<= t; i++) 
    {
        int n,n2,v=1;
        int flag=0;
        
        scanf("%d",&n);
        n2=n*2;

        for (int x = 1 ; x <=n2; x++) 
        {    
            if (v%4==1 || v%4==2) 
            {
                flag = 0;
            }
            
            else 
            {
                flag = 1;
            }

            for (int y = 1; y<=n;y++) 
            {
                if (flag == 0) 
                {
                    printf("##");
                    flag =1;
                }
                
                else if (flag == 1)
                {
                    printf("..");
                    flag =0;
                }
            }  
              
            printf("\n");
            v++;              
        }
    } 
} 