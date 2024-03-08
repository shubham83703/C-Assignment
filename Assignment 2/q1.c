#include<stdio.h>
int main()
{
int n1,n2;
double div;
printf("enter the n1:  ");
scanf("%d",&n1);
printf("enter the n2:  ");
scanf("%d",&n2);
if(n2 !=0 )
{
div=n1/n2;
printf("division= %lf \n",div);
}
else
{
printf("no is not divisible");
}
return 0;
}
