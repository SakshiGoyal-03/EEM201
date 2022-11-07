#include<stdio.h>
main()
{
  int n,j,i,c=0;
  printf("Enter the number : ");
  scanf("%d",&n);

  for(i=1;i<=j;i++)
  {
     for(j=1;j<=n;j++)
     {
         if(j%i == 0)
         {
             c++;
         }
     }
     if(c==2)
     {
         printf("%d",i);
     }
  }
}
