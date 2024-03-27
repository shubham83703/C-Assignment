#include<stdio.h>
int power(int base,int index);
int main()
{
	int base,index,res;
	printf("enter the base: ");
	scanf("%d",&base);

	printf("enter the index: ");
	scanf("%d",&index);
	res=power(base,index);
	printf(" %d",res);
	return 0;
}

int power(int base,int index)
{
	int power=1;
	for(int i=1;i<=index;i++)
		power=base*power;
	return power;
}
