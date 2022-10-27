#include<stdio.h>
main()
{
   float F,C;
   printf("enter temperature in celcius:");
   scanf("%f",&C);
   F = (9*C)/5+32;
   printf("temperature in fahrenheit is %f",F);
}
