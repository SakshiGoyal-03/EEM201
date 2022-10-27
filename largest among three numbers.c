#include<stdio.h>
main()
{
  int  a,b,c;
  printf(" Enter three numbers:");
  scanf("%d \n %d \n %d", &a, &b, & c);

  if ( a>b && a>c)
  printf(" a is largest among three numbers");
  else if(b>c && b>a)
  printf(" b is largest among three numbers");
  else
  printf(" c is largest among three numbers");
  }
