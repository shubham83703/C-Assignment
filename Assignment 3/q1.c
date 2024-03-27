#include<stdio.h>
int main()
{
	int num,i=0;
	char ch;
	printf("enter the characte: ");
	scanf("%c",&ch);
	printf("enter the number : ");
	scanf("%d",&num);
	while(i!=num)
	{
		printf(" %c",ch);
		i++;
	}
	return 0;
}
