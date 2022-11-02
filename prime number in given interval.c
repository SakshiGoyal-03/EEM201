#include<stdio.h>
void prime(int,int);
main()
{
   int a,b;
   printf("Enter the range of numbers : ");
   scanf("%d %d",&a,&b);
   prime(a,b);


}

void prime(int x, int y)
{
   int i,c=0;
   while(x<=y)
   {
      for(i=1;i<=x;i++)
      {
         if(x%i==0)
         {
            c++;
         }
      }
      if(c==2)
            printf("%d ",x);
      x++;
      c=0;
    }

}
