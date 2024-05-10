#include <stdio.h>

int main ()
{      
  short z=-32768; // From -32768 to 32767 (-2^15 to +2^15 ). // 2 bytes = 16 bites = 2^16 numbers. 
  char a='A', b='3' , c='5'; // 2^8 = 256 numbers of different character 
  int x = 65;  //  32 bites = 2^32 numbers. // from -2^31 to +2^31.
  long long y = 509728389; // 64 bites = 2^64 numbers. // from -2^63 to +2^63

  printf("%c  %c\n" ,a,x);
  printf("%d" ,a);
  printf("%d" ,z);
  scanf("%d" ,&x);

  printf("%c  %c\n" ,a,x);




    return 0;
}