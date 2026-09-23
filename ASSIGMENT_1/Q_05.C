#include<stdio.h>
int main()
{
int x,y,z;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("\nenter the value of y:");
	scanf("%d",&y);
	z=x;
	x=y;
	y=z;
	printf("\nx is:%d",x);
	printf("\ny is:%d",y);
}