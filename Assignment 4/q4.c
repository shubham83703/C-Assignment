#include<stdio.h>
int add(int,char,int);
int substract(int,char,int);
int multiplication(int,char,int);
int division(int,char,int);
int flag=1;
int main()
{
	int num1,num2,results;
	char opr;
	printf("enter the num1,opr,num2:  \n");
	scanf("%d %c %d",&num1,&opr,&num2);
	results=add(num1,opr,num2);
	printf("addition= %d\n",results);
	results=substract(num1,opr,num2);
	printf("substraction= %d\n",results);
	results=multiplication(num1,opr,num2);
	printf("multiplication= %d\n",results);
	results=division(num1,opr,num2);
if(results==-1)

	printf("not divisible by 0");
	else
	printf("division= %d",results);
	return 0;
}
int add(int a,char o,int b)
{
	int result=a+b;
	return result;
}

int substract(int a,char o,int b)
{
	int result=a-b;
	return result;
}
int multiplication(int a,char o,int b)
{
	int result=a*b;
	return result;
}
int division(int a,char o,int b)
 { int result;
if(b==0)
{
	
	
return flag= -1;
	}
 else
    result = a/b;
	return result;
}
