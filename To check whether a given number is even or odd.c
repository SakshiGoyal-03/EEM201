#include<stdio.h>
main()
{
   int num;
   printf(" Enter an integer number:");
   scanf("%d",&num);

   if( num % 2 == 0)
   printf(" Entered number is EVEN");
   else
   printf(" Entered number is ODD");
}
