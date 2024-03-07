#include<stdio.h>
int main()
{
int num,i;
printf("enter the number= ");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
num*i;
printf(" %d  \n",num);
}
return 0;
}
