#include<stdio.h>
#include<math.h>
main()
{
   float a , b , c;
   float s , A;
   printf(" Enter three sides of a triangle:");
   scanf(" %f%f%f", &a,&b,&c);
   s = (a+b+c)/2;
   A = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("\n Area of triangle is %f",A);
   }
