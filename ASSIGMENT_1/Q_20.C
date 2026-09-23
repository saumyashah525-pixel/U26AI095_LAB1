#include<stdio.h>
int main()
{
char op;
int a,b,ans;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter the operator:");
	scanf("%c",&op);
	switch(op)
		{
		case 'a':
		{
		ans=a+b;
		printf("answer is:%d",ans);
		break;
		}
		case 'b':
		{
		ans=a-b;
		printf("answer is:%d",ans);
		break;
		}
		case 'c':
		{
		ans=a*b;
		printf("answer is:%d",ans);
		break;
		}
		case 'd':
		{
		ans=a/b;
		printf("answer is:%d",ans);
		break;
		}
		default:
		{
		printf("error");
		}
	}
}
