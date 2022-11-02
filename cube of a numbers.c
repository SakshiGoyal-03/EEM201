#include<stdio.h>
main()
{
    int i,n,cube;
    printf("enter an integer\n");
    scanf("%d",&n);

     for(i=1;i<=n;i++)
     {

         cube = i*i*i;
         printf(" Number is %d and cube of %d is %d\n",i,i,cube);
     }

 }
