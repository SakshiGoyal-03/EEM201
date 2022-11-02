#include<stdio.h>
int main()
{

int i,sum=0,n;
printf("Enter Number");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
    {
       if(n%i==0)
        sum=sum+i;

    }
    if(sum==n)
        printf("Given Number is Perfect Number");
    else
        printf("Given Number is  not Perfect Number");
    return 0;
}
