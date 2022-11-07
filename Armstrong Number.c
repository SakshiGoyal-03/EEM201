#include<stdio.h>
int main()
{

    int num,sum=0,rem;
    printf("Enter Number: ");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {

        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }

    if(temp==sum)
        printf("Given Number is Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
