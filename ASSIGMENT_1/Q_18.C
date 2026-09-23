#include<stdio.h>
int main()
{
int a,b,c,max;
	printf("enter a:");
	scanf("%d",&a);
	printf("\nenter b:");
	scanf("%d",&b);
	printf("\nenter c:");
	scanf("%d",&c);
	max= (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("maximum is:%d",max);
}