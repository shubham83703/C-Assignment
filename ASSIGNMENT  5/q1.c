#include<stdio.h>
int main()
{
int marks[5];
printf("enter the marks: \n");
for(int i=0;i<5;i++)
{
printf("marks[%d] : ",i);
scanf("%d",&marks[i]);
}
printf("marks: ");
for(int i=0;i<5;i++)
{
printf("%-4d",marks[i]);
}
printf("\n");
int total=marks[%d]+marks[%d]+marks[%d]+marks[%d]+marks[%d];
return 0;
}

