#include<stdio.h>
   int main()
  { 
  int min,max;
  printf("enter the minimum range: ");
  scanf("%d",&min);
   for(int i=1;i<=10;i++)
   {
  printf("enter the maximum range: ");
  scanf("%d",&max);
   for(int j=1;j<=10;j++)
   printf("%d*%d=%-4d ",i,j,i*j);
   printf("\n");
   }
  
  return 0;
  }
   
                                                                                          
