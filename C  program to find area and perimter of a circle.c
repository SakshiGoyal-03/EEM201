#include<stdio.h>
main()
{
   float radius,area,perimeter;
   printf("Enter radius of circle");
   scanf("%f",&radius);
   area = 3.14*radius*radius;
   perimeter = 2*3.14*radius;
   printf(" \nArea of circle is %f",area);
   printf("\n\nPerimeter of circle is %f",perimeter );
}
