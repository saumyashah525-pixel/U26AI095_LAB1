#include<stdio.h>
int main()
{
int m,e,s,h,g,t;
float p;
	printf("enter the marks of english:");
	scanf("%d",&e);
	printf("\nenter the marks of maths:");
	scanf("%d",&m);
	printf("\nenter the marks of science:");
	scanf("%d",&s);
	printf("\nenter the marks of hindi:");
	scanf("%d",&h);
	printf("\nenter the marks of gujarati:");
	scanf("%d",&g);
	t=e+m+s+h+g;
	p=(t/500)*100;
	printf("\nthe total of the marks is:%d",t);
	printf("\nthe percentage is:%.2f",p);
}