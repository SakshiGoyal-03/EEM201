#include<stdio.h>
main()
{
  int days, T_years , T_weeks , T_days;
  printf("Enter number of days:");
  scanf("%d", &days);

  T_years = days/365;
  T_weeks = (days%365)/7;
  T_days = ((days%365)%7);

  printf(" OUTPUT - %d years, %d weeks, %d days", T_years, T_weeks, T_days);


  }
