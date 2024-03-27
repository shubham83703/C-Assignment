#include<stdio.h>
char print(char ch,int num);
int main()
{
int num;
char ch,result;
printf("enter the number: ");
scanf("%d",&num);
printf("enter the character: ");
scanf("%s",&ch);
result=print(ch, num);
printf("%c\n",ch);
return 0;
}
char print(char ch,int num)
{
for(int i=1;i<num;i++)
printf("%c",ch);
return ch;
}
