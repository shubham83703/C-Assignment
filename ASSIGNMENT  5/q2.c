#include<stdio.h>
int main()
{
int arr[5];
printf("enter the elements: \n");
for(int i=0;i<5;i++)
{
printf("arr[%d]= %d",i);
scanf("%d",&arr[i]);
}
printf("Array: ");
for(int i=0;i<5;i++)
{
printf("%d",arr[i]);
}
return 0;
}

