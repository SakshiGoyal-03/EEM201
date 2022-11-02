#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c;
    float D;
     double x1,x2;
    printf("Enter the coefficient of x square,x and constant: ");
    scanf("%d%d%d",&a,&b,&c);
    D = (b*b-4*a*c);
    if(D>0)
    {
    x1 = b+sqrt(D)/2*a;
    x2 = -b-sqrt(D)/2*a;
    printf("Roots of given quadratic equation is %f and %f",x1,x2);
    }
     else if(D<0)
    {
    printf(" First root : %f+i%f",-b/2*a,sqrt(D)/2*a);
    printf(" Second root : %f+i%f",-b/2*a,-sqrt(D)/2*a);
    }
}
