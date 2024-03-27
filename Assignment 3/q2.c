#include<stdio.h>
int main()
{
int num;
int i=1;
printf("enter the number: ");
scanf("%d",&num);
while( i<=10)
{
printf("%d * %d =%d \n",i,num,num*i);
i++;
}
return 0;
}
