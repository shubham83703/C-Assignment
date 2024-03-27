#include<stdio.h>
int fact(int num1);
int main()
{
int num1,factorial;
printf("enter the number: ");
scanf("%d",&num1);
factorial=fact (num1);
printf("factorial of number= %d",factorial);

return 0;
}
int fact(int num1)
{
int fact=1;
for(int i=1;i<=num1;i++)
fact=fact*i;
return fact;
}
