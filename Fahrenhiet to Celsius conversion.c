#include<stdio.h>
main()
{
   float F, C;
   printf("enter temperature in fahreheit:");
   scanf("%f",&F);
   C = ((F - 32)*5)/9;
   printf("temperature in Celsius is %f",C);
}
