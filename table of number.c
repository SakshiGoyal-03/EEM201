#include<stdio.h>
main()
{
     int i,n,mul;

     printf("ENTER A NUMBER\n");
     scanf("%d",&n);

     printf("TABLE IS\n");

     for(i=1;i<=10;i++)
       {
           mul = i*n;
           printf("%d * %d is %d\n",i,n,mul);
       }
}
