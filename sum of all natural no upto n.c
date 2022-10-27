#include<stdio.h>
main()
{
  int i,n,sum=0;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  printf("\nNumbers are \n");

    for(i=1;i<=n;i++)
      {
          if(i%2!=0)
            {
                printf("%d ",i);
               sum = sum+i;
            }

      }

     printf(" \n\n Sum is %d",sum);
}
