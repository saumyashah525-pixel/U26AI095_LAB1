#include<stdio.h>
int main()
{
int h,m,s,t;
	printf("enter the hours:");
	scanf("%d",&h);
	printf("\nenter the minutes:");
	scanf("%d",&m);
	printf("\nenter the seconds:");
	scanf("%d",&s);
	t=(3600*h)+(60*m)+(s);
	printf("\nthe total seconds is:%d",t);
}