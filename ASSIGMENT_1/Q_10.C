#include<stdio.h>
int main()
{
int cm,p,c,m,e;
	printf("enter the marks in physics:");
	scanf("%d",&p);
	printf("\nenter the marks in chemistry:");
	scanf("%d",&c);
	printf("\nenter the marks in maths:");
	scanf("%d",&m);
	printf("\nenter the entrance exam marks:");
	scanf("%d",&e);
	cm=(p/2)+(c/2)+(m/2)+e;
	printf("\nthe cutoff marks is:%d",cm);
}
