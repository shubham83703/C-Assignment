#include<stdio.h>
int main()
{
double c,f;
printf("enter the temperatue in fahrenheit= ");
scanf("%lf",&f);
c=(f-32)*5/9;
printf("temp in celcius= %lf",c );
return 0;
}
