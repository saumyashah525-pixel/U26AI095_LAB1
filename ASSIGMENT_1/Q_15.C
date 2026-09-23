#include<stdio.h>
int main()
{
int e,h,g,m,s,t;
	printf("enter the marks of english:");
	scanf("%d",&e);
	printf("\nenter the marks of hindi:");
	scanf("%d",&h);
	printf("\nenter the marks of gujarati:");
	scanf("%d",&g);
	printf("\nenter the marks of maths:");
	scanf("%d",&m);
	printf("\nenter the marks of science:");
	scanf("%d",&s);
	t=e+h+g+s+m;
	if(t>=450)
		{
		printf("\ndivision a");
		}
	else if(t>=400&&t<450)
		{
		printf("\ndivision b");
		}
	else if(t>=350&&t<400)
		{
		printf("division c");
		}
	else
		{
		printf("division d");
		}
}